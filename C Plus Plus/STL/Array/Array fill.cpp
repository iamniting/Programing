#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    array<int, 6> ar ;

    ar.fill(3);
    cout << "The array contains" << endl;
    for (int i=0; i<6; i++)
    cout << ar[i] << " ";
    cout << endl;
    return 0;
}
