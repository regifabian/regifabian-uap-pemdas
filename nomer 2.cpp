#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main()
{
    float median;
    double array[10]{ 87,45,50,25,32,10,75,90,5,8 };
    int panjang = sizeof(array) / sizeof(array[0]);

    cout << "deret sebelum disorting\n";
    for (int i = 0; i < panjang; i++) 
    {
        cout << array[i] << " |";
    }

    cout << '\n';

    vector<double>vect(array, array + panjang);
    sort(vect.begin(), vect.end(), greater<int>());
    cout << "Deret setelah di sorting dari besar ke kecil :\n";
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " |";
    }

    cout << '\n';

    cout << "nilai Median : ";
    median = (vect[4] / 2) + (vect[5] / 2);
    cout << median;


}