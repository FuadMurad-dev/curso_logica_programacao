#include <iostream>

using namespace std; 

int main()
{
    int a, b, c; 

    cout << "Primeiro valor: ";
    cin >> a; 

    cout << "Segundo valor: ";
    cin >> b; 

    cout << "Terceiro valor: ";
    cin >> c; 

    if (a < b && a < c)
    {
        cout  << "MENOR: " << a << endl; 
    }
    else if (b < a && b < c)
    {
        cout  << "MENOR: " << b << endl;
    }
    else if(c < a && c < b)
    {
        cout  << "MENOR: " << c << endl;
    }



    return 0; 
}