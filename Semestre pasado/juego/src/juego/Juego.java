package juego;
import java.util.Scanner;
import java.util.Random;

public class Juego {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Random rnd = new Random();
        
        int a,b,c;
        int vidas = 5;
        int n;
        a = (int)(Math.random()*5)+1;
        b = (int)(Math.random()*5)+1;
        c = (int)(Math.random()*5)+1;
        
        System.out.println("Bienvenidos al juego de adivina el numero prras");
        System.out.println("Tiene "+vidas+" vidas intenta no perderlas todas");
        
        System.out.println("Comenzemos");
        
        do{
            System.out.println("Adivina el numero");
            n = scan.nextInt();
            
            if(n == a){
                System.out.println("Bien hecho adivinaste el numero");
                break;
            }else if(n==b){
                System.out.println("Bien heco adivinanste el numero");
                break;
            }else if(n==c){
                System.out.println("Bien hecho adivinaste el numero");
                break;
            }else if(vidas == 0){
                System.out.println("Lo sentimos pero has perido todas tus vidad");
                break;
            }else{
                System.out.println("Intente de nuevo");
                vidas = vidas - 1;
            }
            
        }while(vidas>0);
        
        System.out.println("numero a: "+a+"  Numero c: "+b+"  Numero c: "+c);
        
    }
    
}
