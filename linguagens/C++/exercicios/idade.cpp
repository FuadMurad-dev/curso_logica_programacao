#include <iostream> 
#include <string> 
#include <climits> 
using namespace std; 

int main()
{
    string nome1, nome2; 
    int idade1, idade2;
    float media;  

    cout << "Primeira pessoa: "; 
    getline(cin, nome1);

    cout << "Idade da primeira pessoa: "; 
    cin >> idade1;
    
    cin.ignore(INT_MAX, '\n'); // clear the buffer

    cout << "Segunda pessoa: "; 
    getline(cin, nome2);
    
    cout << "Idade da Segunda pessoa: "; 
    cin >> idade2;

    media = (idade1 + idade2) / 2;
    
    cout << "A idade de " << nome1 << " eh " << nome2 << " e de " << media << " anos" << endl;  


    return 0; 
}