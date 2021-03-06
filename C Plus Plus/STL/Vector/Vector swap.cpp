#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void showVector(vector<int> v)
{
    vector<int>::iterator itr;
    for(itr = v.begin(); itr < v.end(); itr++)
        cout << *itr << " ";
        cout << endl;
}

int main()
{
    vector<int> v;
    vector<int> v1;
    vector<int>::iterator itr;

    for(int i=0; i<=5; i++)
        v.push_back(i * 10);

    for(int i=0; i<=5; i++)
        v1.push_back((i * 10) + 5);

    cout << "vector is" << endl;
    showVector(v);

    cout << "vector1 is" << endl;
    showVector(v1);

    swap(v, v1);
    cout << "after swap" << endl;
    cout << "vector is" << endl;
    showVector(v);

    cout << "vector1 is" << endl;
    showVector(v1);
    return 0;
}
