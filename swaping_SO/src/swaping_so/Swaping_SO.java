package swaping_so;

public class Swaping_SO {
    public String MemoriaFisica[]=new String[5];
    public String DiscoDuro[]=new String[5];
    public Swaping_SO(){
    }
    public void llenandoMemoriayDiscoDuro(){
        //Memoria
        for(int i=0; i<MemoriaFisica.length; i++){
            MemoriaFisica[i]="Proceso "+i;
        }
        //Disco
        for(int i=0; i<DiscoDuro.length; i++){
            if(DiscoDuro[i]==null){
                DiscoDuro[i]=" ";
            }
        }
        
    }
    public void SwapOut(){
        int n=0;
        System.out.println("\n\t"+MemoriaFisica[n]+" salio \n");
        DiscoDuro[0]=MemoriaFisica[n];
        
        for(int i=0; i<MemoriaFisica.length; i++){
            if(i<4){
                MemoriaFisica[i]=MemoriaFisica[i+1];
            }else{
                MemoriaFisica[4]=" ";
            }
        }
    }
    public void SwapIn(){
        int n=0;
        System.out.println("\n\t"+DiscoDuro[n]+" Entro \n");
        MemoriaFisica[4]=DiscoDuro[0];
        DiscoDuro[0]=" ";
    }
    public void mostrarMemoria(){
        System.out.println("Memoria Fisica\t\tDisco Duro");
        for(int i=0; i<MemoriaFisica.length; i++){
            System.out.println(MemoriaFisica[i]+"\t\t     "+DiscoDuro[i]);
        }
    }
    public static void main(String[] args) {
        Swaping_SO s = new Swaping_SO();
        s.llenandoMemoriayDiscoDuro();
        int n=0;
        s.mostrarMemoria();
        while(n<5){
        s.SwapOut();
        s.mostrarMemoria();
        s.SwapIn();
        s.mostrarMemoria();
        n++;
        }
    }
    
}
