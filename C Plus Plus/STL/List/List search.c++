#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> l{10,20,30,40,50};
    list<int>::iterator itr;
    int ar[] = {20, 30, 40};
    
    cout << "list is" << endl;
    for(itr = l.begin(); itr != l.end(); itr++)
        cout << *itr << " ";
        cout << endl;
    
    itr = search(l.begin(), l.end(), ar, ar+3);
    if(itr != l.end())
        cout << "ar find at " << *itr << endl;
    else
        cout << "not find";
    return 0;
}
