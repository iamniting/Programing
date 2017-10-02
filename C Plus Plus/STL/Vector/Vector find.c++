#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    vector<int>::iterator itr;

    for(int i=5; i>0; i--)
        v.push_back(i * 10);

    cout << "vector is" << endl;
    for(itr = v.begin(); itr < v.end(); itr++)
        cout << *itr << " ";
        cout << endl;

    itr = find(v.begin(), v.end(), 20);
    if(itr != v.end())
        cout << "20 find at " << itr-v.begin() << endl;
    return 0;
}
