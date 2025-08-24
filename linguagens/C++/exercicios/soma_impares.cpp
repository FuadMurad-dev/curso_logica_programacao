#include <iostream> 
#include <cmath> 

using namespace std; 

int main()
{
   int x; 
   int y; 
   int soma = 0;
   int troca = 0; 
   
   cout << "Digite dois numeros: ";
   cin >> x >> y; 

   if( x > y)
   {
        troca = x; 
        x = y; 
        y = troca; 
   } 

   for (int i = x + 1; i < y; i++)
   {
        if(i %2 != 0)
        {
            soma = soma + i; 
        }
   }

   cout << "Soma dos impares: " << soma << endl;

    return 0; 
}