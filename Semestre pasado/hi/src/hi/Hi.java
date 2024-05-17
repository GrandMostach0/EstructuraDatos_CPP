package hi;
import java.util.Scanner;

public class Hi {
    
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        
        int mayor=0, suma=0;
        int aux=0;
        
        System.out.println("Ingrese cuantos numeros desea comparar");
        int logitud = scan.nextInt();
        
        int num[] = new int [logitud];
        
        System.out.println("\n\n");
        for(int i = 0; i<logitud; i++){
            System.out.println("Ingrese los numeros porfavor");
            num[i] = scan.nextInt();
        }
        
        for(int i = 0; i<logitud; i++){
            
            suma = suma + num[i];
            
            if(num[i]==1){
                num[i]=mayor;
            }
            
            if(num[i]>mayor){
                mayor=num[i];
            }
        }
        
        for(int i = 0; i<num.length; i++){
            for(int k = i+1; k<num.length; k++){
                if(num[k]>num[i]){
                    aux = num[i];
                    num[i]=num[k];
                    num[k]=aux;
                }
            }
        }
        System.out.println("\n\n");
        System.out.println("Se muestra los numeros escorados del mayor al menor : ");
        for(int i=0; i<num.length; i++){
            System.out.println(num[i]);
        }
        System.out.println("\n\n\n");
        System.out.println("La suma de los siguientes son : "+suma);
        System.out.println("El numero mayor es : "+mayor);
    }
}
