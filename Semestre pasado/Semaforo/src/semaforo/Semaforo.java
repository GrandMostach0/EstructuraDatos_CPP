package semaforo;
import static java.lang.Thread.sleep;

public class Semaforo {
    private int suma;
    private int multiplicar;
    private int resta;

    public Semaforo(){
        this.suma = 0;
        this.multiplicar=1;
        this.resta=11;
    }
    
    public void sumar(){
        System.out.println("Sumar : ");
        try{
            for(int i=0; i<5;i++){
                this.suma+=4;
                System.out.print(this.suma+",");
                Thread.sleep(500);
            }
        }catch(InterruptedException e){
            System.out.println("Error");
            System.exit(0);
        }
        suma=0;
        System.out.println("\n");
    }
    
    public void multi(){
        System.out.println("Multiplicar: ");
        try{
            for(int i=0; i<=10; i++){
                this.multiplicar = 4*i;
                System.out.print(this.multiplicar+",");
                Thread.sleep(650);
            }
        }catch(InterruptedException e){
            System.out.println("Ha Ocurrido un Error");
            System.exit(0);
        }
        System.out.println("\n");
    }
    
    public void restar(){
        
        System.out.println("Restar : ");
        try{
            for(int i=1; i<12; i++){
                this.resta =resta-1;
                System.out.print("("+this.resta+")");
                Thread.sleep(500);
            }
        }catch(InterruptedException e){
            System.out.println("Ocurrio un error");
            System.exit(0);
        }
        resta=11;
        System.out.println("\n");
    }
    public static void main(String[] args) throws InterruptedException {
        Semaforo sem = new Semaforo();

        int wait=1;
        int signal = 0;
        
        for(int i=0; i<2;i++){
            if(wait == 1){
                System.out.println("Ha comenzado la sumatoria:  ....\nlos otros procesos estan en espera.....\n");
                Thread.sleep(750);
                sem.sumar();
                wait=0;
            }
            if(signal==0){
                System.out.println("Ha comenzado la resta:     ...\nlos otros procesos estan en espera.....\n");
                Thread.sleep(750);
                sem.restar();
            }
            if(wait==0){
                System.out.println("Ha comenzado la multiplicacion:    ...\nlos otros procesos estan en espera.....\n");
                Thread.sleep(750);
                sem.multi();
                wait=1;
            }
        }
    }
    
}
