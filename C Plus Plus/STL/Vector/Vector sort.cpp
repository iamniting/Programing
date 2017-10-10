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

    for(int i=5; i>0; i--)
        v.push_back(i * 10);

    cout << "vector is" << endl;
    showVector(v);

    sort(v.begin(), v.end());
    cout << "after sorting" << endl;
    showVector(v);
    return 0;
}
