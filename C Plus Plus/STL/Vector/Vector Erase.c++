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
    vector<int>::iterator itr;

    for(int i=0; i<=5; i++)
        v.push_back(i * 10);

    cout << "vector is" << endl;
    showVector(v);

    v.erase(v.begin()+2);
    cout << "after erase 2nd element" << endl;
    showVector(v);

    v.erase(v.begin()+2, v.begin()+4);
    cout << "after erase 2nd to 4th element" << endl;
    showVector(v);

    v.clear();
    cout << "after clear vector" << endl;
    showVector(v);
    return 0;
}
