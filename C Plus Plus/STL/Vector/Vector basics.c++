#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    vector<int>::iterator itr;

    for(int i=0; i<=5; i++)
        v.push_back(i * 10);
    v.pop_back();

    cout << "vector is" << endl;
    for(itr = v.begin(); itr < v.end(); itr++)
        cout << *itr << " ";
        cout << endl;

    cout << "front " << v.front() << endl;
    cout << "front+4 " << v.front()+4 << endl;

    cout << "back " << v.back() << endl;
    cout << "back+4 " << v.back()+4 << endl;

    cout << "begin " << *v.begin() << endl;
    cout << "begin+1 " << *v.begin()+1 << endl;
    cout << "(begin+1) " << *(v.begin()+1) << endl;

    cout << "(end-1)" << *(v.end()-1) << endl;

    cout << "rbegin " << *v.rbegin() <<endl;
    cout << "rbegin+1 " << *v.rbegin()+1 << endl;
    cout << "(rbegin+1) " << *(v.rbegin()+1) << endl;

    cout << "rend-1 " << *(v.rend()-1) <<endl;

    cout << "size " << v.size() << endl;
    cout << "empty " << v.empty() << endl;

    cout << "v[1] " << v[1] << endl;
    cout << "v.at(2) " << v.at(2) << endl;
    return 0;
}
