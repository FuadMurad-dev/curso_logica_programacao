#include <stdio.h>
#include <string.h>
#include <math.h> 


int main()
{
    
    double base, altura, valor, area, perimetro, diagonal; 
    
    printf("Digite a largura do retangulo: ");
    scanf ("%lf", &base); 
    
    printf("Digite a comprimentodo retangulo: ");
    scanf ("%lf", &altura);
    
    
    area = (altura * base); 
    
    printf("Area é = %.4lf\n",  area); 
    
    perimetro = 2 * (base + altura); 
    
    printf("preco é = %.4lf\n" , perimetro);
    
    diagonal = sqrt((base*base) + (altura*altura)); 
    
    printf("preco é = %.4lf" , diagonal);
    
    
    
    
	return 0;
}