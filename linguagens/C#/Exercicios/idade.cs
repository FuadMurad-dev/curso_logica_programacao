using System;
using System.Globalization;

namespace Programa {
class Program {
	static void Main(string[] args) {


		CultureInfo CI = CultureInfo.InvariantCulture;

		double idade1, idade2, media;
		string nome1, nome2;

		Console.WriteLine("Coloque o nome da pessoa 1: ") ;
		nome1 = Console.ReadLine();

		Console.WriteLine("Coloque a idade da pessoa 1: ");
		idade1 = double.Parse(Console.ReadLine(), CI);

		Console.WriteLine("Coloque o nome da pessoa 2: ") ;
		nome2 = Console.ReadLine();

		Console.WriteLine("Coloque a idade da pessoa 2: ");
		idade2 = double.Parse(Console.ReadLine(), CI);


		media = (idade1 + idade2)  / 2 ;

		Console.WriteLine("A idade media de " + nome1 + " e " + nome2  + " e de " + media.ToString("F2", CI));

	}
}
}