
using System;
using System.Globalization;
class HelloWorld {
	static void Main() {
        
        
        CultureInfo CI = CultureInfo.InvariantCulture;

		int idade;
		char genero;
		double salario, altura;
		string nome;


		idade = 20;
		salario = 5800.52101;
		altura = 1.63;
		genero = 'F';
		nome = "Maria Silva";

		Console.WriteLine(idade);
		Console.WriteLine(salario.ToString("F4", CultureInfo.InvariantCulture));  // 4 casas decimais
		// esse invalide cultureinfo.invariantculture e para mudar a , para .
		Console.WriteLine(altura);
		Console.WriteLine(genero);
		Console.WriteLine(nome);

		Console.WriteLine("A funcionaria " + nome + ", genero " + genero + ", ganha " + salario.ToString("F2", CI) + " e tem " + idade + " anos");
	}
}