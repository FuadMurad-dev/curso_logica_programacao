import java.util.Scanner;

public class idade
{
	public static void main(String[] args) {

		double idade1, idade2, media;
		String nome1, nome2;

		Scanner sc = new Scanner(System.in);

		System.out.println("coloque o nome da primeira pessoa: ");

		nome1 = sc.nextLine();

		System.out.println("coloque a idade da primeira pessoa: ");

		idade1 = sc.nextDouble();

		System.out.println("coloque o nome da segunda pessoa: ");

		nome2 = sc.nextLine();

		System.out.println("coloque a idade da segunda pessoa: ");

		idade2 = sc.nextDouble();

		media = (idade1 + idade2) / 2;

		System.out.println("a media de idade de " + nome1 + " e "  + nome2 + " = "  + String.format("%.1f",media));
		
		sc.close();
	}
}
