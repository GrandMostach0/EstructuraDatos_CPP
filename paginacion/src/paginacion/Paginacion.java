package paginacion;
public class Paginacion {
    public static void main(String[] args) throws InterruptedException {
        String []memoriaFisica=new String[8];
        int []valorPagina={6,5,7,3};
        int []tablePage = new int[4];
        
        //asignando los valores que tendra la pagina de tabla
        for(int r=0; r<tablePage.length; r++){
            for(int l=0; l<valorPagina.length; l++){
                if(l==r){
                    tablePage[r]=valorPagina[l];
                }
            }
        }
        
        //mostrando los valores que ya se han asignado a la tabla y tambien la memoria logica
        System.out.println("\n\nMemoria Logica     -- Tabla de paginas --");
        for(int f=0; f<tablePage.length; f++){
            Thread.sleep(600);
            System.out.println("     page "+f+"\t\t"+f+" ["+tablePage[f]+"]");
        }
        Thread.sleep(800);
        
        for(int i=0; i<memoriaFisica.length; i++){
            if(i==6){
                memoriaFisica[i]="Page 0";
            }else if(i==5){
                memoriaFisica[i]="Page 1";
            }else if(i==7){
                memoriaFisica[i]="page 2";
            }else if(i==3){
                memoriaFisica[i]="page 3";
            }else{
                memoriaFisica[i]="   ";
            }
        }
        
        //mostrando los numeros de marcos y el contenido que tiene la memoria fisica
        Thread.sleep(300);
        System.out.println("\n\nNumero de \n Marco ");
        for (int k = 0; k < memoriaFisica.length; k++) {
            Thread.sleep(600);
            System.out.println("  "+k+"\t"+memoriaFisica[k]);
        }
        System.out.println("\tMemoria \n\tfisica");
        System.out.println("\n");
    }
}
