package problema1;
import java.util.Scanner;

public class Problema1 {
    //el datos agregado
    private String usMain = "victor";
    private String pass = "123";
    
    //datos no agregados
    private String us;
    private String pas;
    
    public Problema1(){
        this.pas = us;
        this.us = null;
    }
    
    public void setUsuario(String usuario){
        this.us = usuario;
    }
    
    public void chequeo(){
        if(this.us==usMain){
            System.out.println("Este usario no existe");
        }else{
            System.out.println("Bienvenido");
        }
    }
    
    public static void main(String[] args) {
        Problema1 p1 = new Problema1();
        Scanner scan = new Scanner(System.in);
        System.out.println("Ingrese su nombre de usario");
        String name = scan.next();
        p1.setUsuario(name);
        p1.chequeo();
        
    }//fin del metodo main
    
}//fin de la clase
