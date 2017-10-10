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

    cout << "v.front()  " << v.front() << endl;
    cout << "v.front()+4  " << v.front()+4 << endl;

    cout << "v.back()  " << v.back() << endl;
    cout << "v.back()+4  " << v.back()+4 << endl;

    cout << "*v.begin()  " << *v.begin() << endl;
    cout << "*v.begin()+1  " << *v.begin()+1 << endl;
    cout << "*(v.begin()+1)  " << *(v.begin()+1) << endl;

    cout << "*(v.end()-1)  " << *(v.end()-1) << endl;

    cout << "*v.rbegin()  " << *v.rbegin() <<endl;
    cout << "*v.rbegin()+1  " << *v.rbegin()+1 << endl;
    cout << "*(v.rbegin()+1)  " << *(v.rbegin()+1) << endl;

    cout << "*(v.rend()-1)  " << *(v.rend()-1) <<endl;

    cout << "v.size()  " << v.size() << endl;
    cout << "v.empty()  " << v.empty() << endl;

    cout << "v[1]  " << v[1] << endl;
    cout << "v.at(2)  " << v.at(2) << endl;
    return 0;
}
