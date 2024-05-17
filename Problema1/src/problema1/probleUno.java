package problema1;
import java.util.Scanner;

public class probleUno{
    Scanner scan = new Scanner(System.in);
    private int cantidad = 0;
    private double suma = 0, calificacion = 0, total = 0;
    public probleUno(){//constructor vacio
        this.total = total;
        this.calificacion = calificacion;
    }
    //setters
    public void setCalificiones(int valor){
        this.cantidad = valor;
        
        for(int i = 0; i < this.cantidad; i++){
            System.out.println("Ingrese la calificiones del alumno : ");
            this.calificacion = scan.nextDouble();
            this.suma = this.suma + this.calificacion;
        }
        this.total = this.suma/this.cantidad;
    }
    
    public double getPromedio(){
        return this.total;
    }
}