public class App {
    public static void main(String[] args) throws Exception {
        
        int idade;
        double salario; 
        String nome;
        char genero; 
        int a; 
        double b; 

        b = 5.0; 
        a = (int)b; // casting = (int)

        idade = 30; 
        salario = 5800.5; 
        nome = "Fuad Murad"; 
        genero = 'F';

        System.out.println("a: " + b);
        System.out.println("IDADE: " + idade);
        System.out.println("Salario: " + String.format("%.2f" , salario));
        System.out.println("Nome: "  + nome );
        System.out.println("genero: " + genero);
    }
}
