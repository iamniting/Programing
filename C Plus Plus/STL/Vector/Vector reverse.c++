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

    reverse(v.begin(), v.end());
    cout << "after reverse vector is" << endl;
    showVector(v);
    return 0;
}
