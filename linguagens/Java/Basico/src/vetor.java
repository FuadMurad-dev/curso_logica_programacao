import java.util.Scanner;

public class vetor {
    public static void main(String[] args) throws Exception {

        Scanner sc = new Scanner(System.in); 
        
        int n; 
        System.out.println("Quantos numeros quer digitar?");
        n = sc.nextInt(); 

        double [] vet = new double[n]; 

        for( int i = 0; i < n; i++)
        {
            System.out.println("Digite um numero: ");
            vet[i] = sc.nextDouble(); 
        }

        sc.close();
    }
}