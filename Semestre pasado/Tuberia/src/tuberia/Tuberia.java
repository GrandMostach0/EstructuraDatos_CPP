package tuberia;
import java.lang.Thread;

public class Tuberia {
    public static void main(String[] args) throws Exception{
        int productor[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
        int tuberia[] = new int[5];
        int consumidor[]=new int[productor.length];
        
        System.out.println("----- T U B E R I A -----\n\n");
        ////DATOS GENERALES
        System.out.println("DATOS : ");
        System.out.print("Datos del Productor: ");
        Thread.sleep(700);
        for(int i=0;i<productor.length;i++){
            System.out.print(productor[i]+",");
        }
        System.out.print("\nDatos de la Tuberia:   ");
        Thread.sleep(700);
        for(int i=0;i<tuberia.length;i++){
            System.out.print(tuberia[i]+",");
        }
        System.out.print("\nDatos del Consumidor:  ");
        Thread.sleep(700);
        for(int i=0;i<consumidor.length;i++){
            System.out.print(consumidor[i]+",");
        }
        
        ///------------ PRIMERA FASE
        System.out.println("\n\n**********  - PRIMERA FASE -  **********\n");
        for(int i=0;i<tuberia.length;i++){//llenado de la tuberia
            tuberia[i]=productor[i];
            productor[i]=0;
        }
        System.out.println("LLENANDO LA TUBERIA......");
        for(int i=0; i<tuberia.length;i++){//mostrando el llenado de la tuberia
            Thread.sleep(800);
            System.out.print("("+tuberia[i]+")");
        }
        Thread.sleep(400);
        System.out.println("\nCOMENZANDO EL LLENADO DEL CONSUMIDOR......");
        Thread.sleep(800);
        for(int i=0;i<consumidor.length;i++){//llenando el consumidor
            if(i<5){
                consumidor[i]=tuberia[i];
            }else{
                consumidor[i]=0;
            }
        }
        Thread.sleep(400);
        System.out.println("VACIANDO LA TUBERIA");
        for(int i=0; i<tuberia.length;i++){//vaciando la tuberia
            tuberia[i]=0;
        }
        Thread.sleep(800);
        System.out.print("Ahora los datos del Productor: ");
        Thread.sleep(700);
        for(int i=0;i<productor.length;i++){
            Thread.sleep(300);
            System.out.print(productor[i]+",");
        }
        System.out.print("\nDatos de la Tuberia:   ");
        Thread.sleep(700);
        for(int i=0;i<tuberia.length;i++){
            System.out.print(tuberia[i]+",");
        }
        System.out.print("\nAhora los datos del Consumidor:  ");
        Thread.sleep(700);
        for(int i=0;i<consumidor.length;i++){
            Thread.sleep(300);
            System.out.print(consumidor[i]+",");
        }
        System.out.println("\n\n**********  - SEGUNDA FASE -  **********\n");
        for(int i=5;i<productor.length;i++){//llenado de la tuberia
            if(i<10){
                tuberia[i-5]=productor[i];
                productor[i]=0;
            }
        }
        System.out.println("LLENANDO LA TUBERIA......");
        for(int i=0; i<tuberia.length;i++){//mostrando el llenado de la tuberia
            Thread.sleep(800);
            System.out.print("("+tuberia[i]+")");
        }
        Thread.sleep(400);
        System.out.println("\nCOMENZANDO EL LLENADO DEL CONSUMIDOR......");
        Thread.sleep(800);
        for(int i=5;i<consumidor.length;i++){
            if(i<10){
                consumidor[i]=tuberia[i-5];
            }else{
                consumidor[i]=0;
            }
        }
        Thread.sleep(400);
        System.out.println("VACIANDO LA TUBERIA");
        for(int i=0; i<tuberia.length;i++){
            tuberia[i]=0;
        }
        Thread.sleep(800);
        
        Thread.sleep(800);
        System.out.println("DATOS : ");
        System.out.print("Ahora los datos del Productor: ");
        Thread.sleep(700);
        for(int i=0;i<productor.length;i++){
            Thread.sleep(300);
            System.out.print(productor[i]+",");
        }
        System.out.print("\nDatos de la Tuberia:   ");
        Thread.sleep(700);
        for(int i=0;i<tuberia.length;i++){
            System.out.print(tuberia[i]+",");
        }
        System.out.print("\nAhora los datos del Consumidor:  ");
        Thread.sleep(700);
        for(int i=0;i<consumidor.length;i++){
            Thread.sleep(300);
            System.out.print(consumidor[i]+",");
        }
        System.out.println("\n\n**********  - TERCERA FASE -  **********\n");
        for(int i=10;i<productor.length;i++){//llenado de la tuberia
            if(i<15){
                tuberia[i-10]=productor[i];
                productor[i]=0;
            }
        }
        System.out.println("LLENANDO LA TUBERIA......");
        for(int i=0; i<tuberia.length;i++){//mostrando el llenado de la tuberia
            Thread.sleep(800);
            System.out.print("("+tuberia[i]+")");
        }
        Thread.sleep(400);
        System.out.println("\nCOMENZANDO EL LLENADO DEL CONSUMIDOR......");
        Thread.sleep(800);
        for(int i=10;i<consumidor.length;i++){
            if(i<15){
                consumidor[i]=tuberia[i-10];
            }else{
                consumidor[i]=0;
            }
        }
        Thread.sleep(400);
        System.out.println("VACIANDO LA TUBERIA");
        for(int i=0; i<tuberia.length;i++){
            tuberia[i]=0;
        }
        Thread.sleep(800);
        
        Thread.sleep(800);
        System.out.println("DATOS : ");
        System.out.print("Ahora los datos del Productor: ");
        Thread.sleep(700);
        for(int i=0;i<productor.length;i++){
            Thread.sleep(300);
            System.out.print(productor[i]+",");
        }
        System.out.print("\nDatos de la Tuberia:   ");
        Thread.sleep(700);
        for(int i=0;i<tuberia.length;i++){
            System.out.print(tuberia[i]+",");
        }
        System.out.print("\nAhora los datos del Consumidor:  ");
        Thread.sleep(700);
        for(int i=0;i<consumidor.length;i++){
            Thread.sleep(300);
            System.out.print(consumidor[i]+",");
        }
    }
    
    
}
