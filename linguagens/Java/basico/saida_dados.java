import java.util.locale; 

public class saida_dados{

    public static void main(String[] args)
    {

        locale.setDefault(locale.US); // esse serve para mudar a virgula para ponto, importar a biblioteca

        double x; 
        x = 2.234; 

        System.out.println(String;format("%.2f", x)); // esse string format é para mostrar 2 numeros depois da virgula

        int idade; 
        double salario; 

        idade = 32; 
        salario = 4354.5; 

        System.out.println(" A funcionaria tem " + idade + "E tem um salario de" + salario); 

    }
}