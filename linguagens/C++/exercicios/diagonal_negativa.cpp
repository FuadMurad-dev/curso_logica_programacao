#include <iostream> 

using namespace std; 

int main()
{
    int m; 
    int cont; 

    cout << "Qual sera a ordem da matriz ? "; 
    cin >> m;

    int mat [m][m];

    for(int i = 0; i < m; i ++)
    {
        for( int j = 0; j < m; j ++)
        {
            cout << "Elemento: [" << i << " , " << j << "]: " ;
            cin >> mat [i][j] ;
        }
    }

    cout << "Diagonal princial: "; 
    
    for(int i = 0; i < m; i++)
    {
        cout << mat[i][i] << " " ; 
    }
    cout << endl; 

    cont = 0; 

    for(int i = 0; i < m; i ++)
    {
        for( int j = 0; j < m; j ++)
        {
            if(mat [i][j] < 0)
            {
                cont++; 
            }
        }
    }

    cout << "Quantidade de negativos: " << cont << endl; 


    return 0; 
}