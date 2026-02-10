using System;
using System.Globalization;

namespace Programa {
class Program {
	static void Main(string[] args) {


		CultureInfo CI = CultureInfo.InvariantCulture;

		double altura, base1, area, perimetro, diagonal;

		Console.WriteLine("Coloque a base: ") ;
		base1 = double.Parse(Console.ReadLine(), CI);
		
		Console.WriteLine("Coloque a altura: ") ;
		altura = double.Parse(Console.ReadLine(), CI);
		
		
		area = base1 * altura; 
		
		perimetro = 2 * (base1 +  altura); 
		
		diagonal = Math.Sqrt((altura * altura) + (base1 * base1)); 
		
		
		Console.WriteLine("area = " + area.ToString("F2", CI)); 
		Console.WriteLine("perimetro = " + perimetro.ToString("F2", CI)); 
		Console.WriteLine("diagonal = " + diagonal.ToString("F2", CI)); 
		
	}
}
}