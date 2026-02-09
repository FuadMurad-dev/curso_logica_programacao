import java.util.Scanner;
import java.lang.Math;

public class math
{
	public static void main(String[] args) {

		double base, altura, diagonal, perimetro, area;

		Scanner sc = new Scanner(System.in);

		System.out.println("coloque a Base do retangulo: ");

		base = sc.nextDouble();

		System.out.println("coloque a altura do retangulo: ");

		altura = sc.nextDouble();


		area = (altura * base);

		System.out.println("area do retangulo: " + area);

		perimetro = 2 * (base + altura);

		System.out.println("perimetro do retangulo: " + perimetro);

		diagonal = Math.sqrt((base*base) + (altura*altura));

		System.out.println("diagonal do retangulo: " + String.format("%.4f",diagonal));
		
		sc.close();
	}
}
