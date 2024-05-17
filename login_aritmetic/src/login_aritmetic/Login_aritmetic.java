package login_aritmetic;
import java.util.Scanner;
import java.util.ArrayList;
/*Crear un programa que cree la forma de login y si tiene un usuario entonces
este podra tener accesos a los metodos que tendra que seran solamente aritmeticas*/
public class Login_aritmetic {
    private ArrayList<String>Usuario = new ArrayList<>();
    private String pass, name;
    public Login_aritmetic(){
        name = null;
        pass = null;
    }
    public void setName(String dato){
        this.name = dato;
    }
    public void setPass(String dato){
        this.pass = dato;
    }
    public String verExistencia(){
        if(Usuario.size()==0){
            System.out.println("No se encuentra nombre en la base de datos ");
        }else{
            for(int i=0; i<Usuario.size(); i++){
                if(Usuario.get(i)==this.name){
                    System.out.println("Correcto");
                }else{
                    System.out.println("El usuario no esta registrado en este momento desea registrarse ?");
                }
            }
        }
        return "yes";
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
    }
    
}
