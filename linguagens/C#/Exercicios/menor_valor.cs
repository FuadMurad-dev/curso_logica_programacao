using System;
using System.Globalization;

namespace Programa {
class Program {
	static void Main(string[] args) {


		CultureInfo CI = CultureInfo.InvariantCulture;

		int valor1, valor2, valor3, menor;

		Console.WriteLine("Coloque o valor 1: ") ;
		valor1 = int.Parse(Console.ReadLine());

		Console.WriteLine("Coloque o valor 2 ");
		valor2 = int.Parse(Console.ReadLine());
		
		Console.WriteLine("Coloque o valor 3: ") ;
		valor3 = int.Parse(Console.ReadLine());
		
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

		Console.WriteLine("menor = " + menor);

	}
}
}