#include <iostream>
#include <array>
#include <tuple> // for get()
#include <algorithm>
using namespace std;

int main()
{
    array<int, 6> ar = {10, 20, 30, 40, 50, 60};

    // Printing array elements using at()
    cout << "The array elemets are using at()" << endl;
    for ( int i=0; i<6; i++)
        cout << ar.at(i) << " ";
        cout << endl;

    // Printing array elements using get()
    cout << "The array elemets are using get()" << endl;
    cout << get<0>(ar) << " " << get<1>(ar) << " ";
    cout << get<2>(ar) << " " << get<3>(ar) << " ";
    cout << get<4>(ar) << " " << get<5>(ar) << " ";
    cout << endl;

    // Printing array elements using operator[]
    cout << "The array elements are using operator[]" << endl;
    for (int i=0; i<6; i++)
        cout << ar[i] << " ";
        cout << endl;
    
    cout << "front " << ar.front() << endl;
    cout << "front+4 " << ar.front()+4 << endl;
    
    cout << "back " << ar.back() << endl;
    cout << "back+2 " << ar.back()+2 << endl;
    
    cout << "begin " << *ar.begin() << endl;
    cout << "begin+5 " << *ar.begin()+5 << endl;
    cout << "(begin+2) " << *(ar.begin()+2) << endl;
    
    cout << "(end-1)" << *(ar.end()-1) << endl;
    
    cout << "rbegin " << *ar.rbegin() <<endl;
    cout << "rbegin+1 " << *ar.rbegin()+1 << endl;
    cout << "(rbegin+1) " << *(ar.rbegin()+1) << endl;
    
    cout << "rend-1 " << *(ar.rend()-1) <<endl;
    
    cout << "size " << ar.size() << endl;
    cout << "max_size " << ar.max_size() << endl;
    cout << "empty " << ar.empty() << endl;
    
    return 0;
}
