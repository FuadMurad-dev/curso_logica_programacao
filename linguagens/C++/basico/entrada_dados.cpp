#include <iostream> 
#include <string> 
#include <iomanip> 
#include <climits> 

using namespace std; 

int main()
{

    int salario1; 
    int salario2; 
    string nome1; 
    string nome2; 


    cout << "Nome da primeira pessoa: " ; 
    getline(cin,nome1);

    cout << "Salario da primeira pessoa: "; 
    cin >> salario1; 
     
    cout << "Nome da Segunda pessoa: " ; 
    cin.ignore(INT_MAX, '\n'); // clear the buffer
    getline(cin,nome2);

    cout << "Salario da Segunda pessoa: "; 
    cin >> salario2; 


    cout << "Nome 1 : " << nome1 << endl; 
    cout << "Salario 1 : " << salario1 << endl; 

    cout << "Nome 2 : " << nome1 << endl; 
    cout << "Salario 2 : " << salario1 << endl; 




    return 0; 
}