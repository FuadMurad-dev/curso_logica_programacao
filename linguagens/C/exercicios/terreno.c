#include <stdio.h>
#include <string.h>


int main()
{
    
    double largura, comprimento, valor, area, preco; 
    
    printf("Digite a largura: ");
    scanf ("%lf", &largura); 
    
    printf("Digite a comprimento: ");
    scanf ("%lf", &comprimento);
    
    printf("Digite a valor em metro quadrado: ");
    scanf ("%lf", &valor);
    
    
    area = largura * comprimento; 
    
    printf("Area é = %.2lf\n",  area); 
    
    preco = area * valor; 
    
    printf("preco é = %.2lf" , preco);
    
	return 0;
}