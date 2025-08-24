#include <iostream> 
#include <cmath> 

using namespace std; 

int main()
{
    float base, altura, area, perimetro, diagonal; 

    cout << "Base do retangulo: ";  
    cin >> base; 
    cout << "Altura do retangulo: ";  
    cin >> altura; 
    
    area = base * altura ; 
    perimetro = 2 * (base + altura);
    diagonal =  sqrt((altura*altura) + (base*base)); 

    cout << "Area: " << area << endl; 
    cout << "Perimentro: " << perimetro << endl; 
    cout << "Diagonal: " << diagonal << endl; 
    




    return 0; 
}