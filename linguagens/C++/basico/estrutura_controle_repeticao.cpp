#include <iostream>

using namespace std;

int main()
{

    int numero; 

    cout << "Digite um numero: "; 
    cin >> numero; 

    if(numero == 0)
    {
        for( int i = 0; i <= 5 ; i ++ )
        cout << i << endl;
    }
    else
    {
        cout << "Tente de novo" << endl; 
    }

    return 0; 
}