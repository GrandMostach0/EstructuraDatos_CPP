//Benjamin Alberto Salas Pech
//Victor Bernardo Chan Varguez
package tuberia1;
import java.lang.Thread;

public class Tuberia1 {
    public int productor[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    public int tuberia[]=new int[15];
    public int consumidor[]=new int[productor.length];
    public int posicion=0;
    
    public void setPosicion(int valor){
        this.posicion=valor;
    }
    public int getPosicion(){
        return (this.posicion);
    }
    public Tuberia1(){
    }
    //- - - - - - - - - METODOS PARA MOSTRAR LOS DATOS - - - - - 
    public void mostrarProductor(){
        for(int i=0; i<productor.length; i++){
            System.out.print("("+productor[i]+")");
        }
        System.out.println("");
    }
    public void mostrarTuberia(){
        for(int i=0; i<tuberia.length;i++){
            System.out.print("("+tuberia[i]+")");
        }
        System.out.println("");
    }
    public void mostrarTuberiallenado(){
        for(int i=0; i<tuberia.length;i++){
            try{
                Thread.sleep(600);
            }catch(InterruptedException e){
                System.out.println("Ocurrio un problema");
                System.exit(0);
            }
            System.out.print("("+tuberia[i]+")");
        }
        System.out.println("");
    }
    public void mostrarConsumidor(){
        for(int i=0; i<consumidor.length;i++){
            System.out.print("("+consumidor[i]+")");
        }
        System.out.println("");
    }
    //- - - - -  LLENAR Y VACIAR - - - - -
    public void llenarTuberia(){
        for(int i=0; i<tuberia.length;i++){
            tuberia[i]=productor[i];
            productor[i]=i+1;
        }
    }
    public void vaciarTuberia(){
        for(int i=0; i<tuberia.length; i++){
            tuberia[i]=i+1;
        }
    }
    public void llenarConsumidor(){
        for(int i=0; i<consumidor.length;i++){
            if(i<5){
                consumidor[i]=tuberia[i];
            }else{
                consumidor[i]=i+1;
            }
        }
    }
    public static void main(String[] args) {
        Tuberia1 tub = new Tuberia1();
        System.out.println("----- T U B E R I A -----");
        System.out.println("D A T O S : ");
        System.out.print("Datos que contiene el Productor  :  ");tub.mostrarProductor();
        System.out.print("Datos que contiene la tuberia    :  ");tub.mostrarTuberia();
        System.out.print("Datos que contiene la Consumidor :  ");tub.mostrarConsumidor();
        
        System.out.println("\n*************************************************\n");
        try{
            Thread.sleep(600);
        }catch(InterruptedException e){
            System.out.println("Ocurrio un problema");
            System.exit(0);
        }
        System.out.println("LLENANDO TUBERIA");
        System.out.print("TUBERIA : ");
        tub.llenarTuberia();
        tub.mostrarTuberiallenado();
        System.out.println("TUBERIA LLENA\n");
        
        try{
            Thread.sleep(600);
        }catch(InterruptedException e){
            System.out.println("Ocurrio un problema");
            System.exit(0);
        }
        System.out.print("COMENZANDO EL LLENADO DEL CONSUMIDOR......\n");
        tub.llenarConsumidor();
        try{
            Thread.sleep(600);
        }catch(InterruptedException e){
            System.out.println("Ocurrio un problema");
            System.exit(0);
        }
        System.out.print("Ahora los datos que contiene el Productor  :  ");tub.mostrarProductor();
        System.out.print("Ahora los que contiene la tuberia    :  ");tub.mostrarTuberia();
        System.out.print("Ahora los contiene la Consumidor :  ");tub.mostrarConsumidor();

    }
    
}
