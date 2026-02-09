import java.util.Scanner;


public class menor_valor
{
	public static void main(String[] args) {

		double valor1, valor2, valor3, menor;


		Scanner sc = new Scanner(System.in);

		System.out.println("coloque o valor 1: ");

		valor1 = sc.nextDouble();

		System.out.println("coloque o valor 2: ");

		valor2 = sc.nextDouble();

		System.out.println("coloque o valor 3: ");

		valor3 = sc.nextDouble();

		if(valor1 < valor2 && valor1 < valor3)
		{
			menor = valor1;
		}
		else if(valor2 < valor3)
		{
			menor = valor2;
		}
		else
		{
			menor = valor3;
		}

		System.out.println("Menor " + menor);


		sc.close();
	}
}
