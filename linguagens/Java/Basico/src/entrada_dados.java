import java.util.Scanner;

public class entrada_dados {
    public static void main(String[] args) throws Exception {

        Scanner sc = new Scanner(System.in); 
        String nome1; 
        double salario1; 
        int idade1;
        
        System.out.println("DIgite seu nome: ");
        nome1 = sc.nextLine();

        System.out.println("DIgite seu salario: ");
        salario1 = sc.nextDouble();

        System.out.println("DIgite seu idade: ");
        idade1 = sc.nextInt();
        
        System.out.println(nome1);
        System.out.println(salario1);
        System.out.println(idade1);

        sc.close();
    }
}