#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> l{10,20,30,40,50};
    list<int>::iterator itr;
    
    cout << "list is" << endl;
    for(itr = l.begin(); itr != l.end(); itr++)
        cout << *itr << " ";
        cout << endl;
    
    itr = find(l.begin(), l.end(), 20);
    if(itr == l.end())
        cout << "not found" << endl;
    else
        cout << *itr << " found" << endl;
    
    itr = find(l.begin(), l.end(), 2);
    if(itr == l.end())
        cout << "not found" << endl;
    else
        cout << *itr << " found" << endl;
    return 0;
}
