public class operadores {
    public static void main(String[] args) {
        
        // Operadores aritimenticos
        int numero; 
        float numero2;

        float adiacao = numero + numero2; 
        float subtracao = numero + numero2; 
        float multiplicacao = numero * numero2;
        float divisao = numero/numero2; 
        float resto_divisao = numero % numero2;

        // operadores comparativos

        if (numero > numero2)
        {
            System.out.println("maior");
        }
        else if (numero < numero2)
        {
            System.out.println("menor ");
        }
        else if (numero <= numero2) 
        {
            System.out.println("Menor igual"); 
        }
        else if (numero >= numero2)
        {
            System.out.println("Maior igual"); 
        }
        else if (numero == numero2)
        {
            System.out.println("igual"); 
        } 
        else if (numero != numero2)
        {
            System.out.println("Diferente"); 
        }
        else
        {
            System.out.println("Nao existe"); 
        }

        // operadotes logicos 

        if (numero && numero2)
        {
            System.out.println(" e ");
        }
        else if (numero || numero2)
        {
            System.out.println("Ou");
        }
        else if (numero ! numero2) 
        {
            System.out.println("nao"); 
        }
        else
        {
            System.out.println("Nao existe"); 
        }
    }
}