#include <iostream>

using namespace std; 

int main()
{

    int a; 
    int b; 

    cout << "DIgite dois numeros: "; 
     
    cin >> a >> b;

    while(a != b)
    {
        

        if(a < b)
        {
            cout << "Crescente" << endl; 
        }
       else if( b < a)
        {
            cout << "Decrescente" << endl; 
        }

        cout << "DIgite dois numeros: "; 
        cin >> a >> b;
    }


    return 0; 
}