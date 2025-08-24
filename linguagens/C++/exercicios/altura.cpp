#include <iostream>
#include <string>
#include <vector>
#include <limits> // para numeric_limits

using namespace std;

int main()
{
    int peoples;
    cout << "How many peoples? ";
    cin >> peoples;

    // limpar buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> vet_names(peoples);
    vector<int> vet_age(peoples);
    vector<float> vet_height(peoples);
    int age_por = 0; 
    int cont = 0; 

    float average_age = 0;
    float average_height = 0;

    for (int i = 0; i < peoples; i++)
    {
        cout << "Name of person number " << i + 1 << ": ";
        getline(cin, vet_names[i]);

        cout << "Age of person number " << i + 1 << ": ";
        cin >> vet_age[i];

        cout << "Height of person number " << i + 1 << ": ";
        cin >> vet_height[i];

        average_age += vet_age[i];
        average_height += vet_height[i];


        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if(vet_age[i] <= 16)
        {
            cont++; 
        }
    }

    average_age /= peoples;
    average_height /= peoples;
    age_por = (double) cont *100 /peoples; 
    cout << "Average age: " << average_age << endl;
    cout << "Porcent age: " << age_por << " % " << endl;
    cout << "Average height: " << average_height << endl; 


    return 0;
}
