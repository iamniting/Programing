#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void showlist(list<int> l)
{
    list<int>::iterator itr;
    for(itr = l.begin(); itr != l.end(); itr++)
        cout << *itr << " ";
        cout << endl;
}

int main()
{
    list<int> l1, l2;
    list<int>::iterator itr;

    for(int i=1; i<=8; i++)
        l1.push_back(i * 10);

    for(int i=1; i<=5; i++)
        l2.push_back((i * 10) + 5);
    
    cout << "l1 is" << endl;
    showlist(l1);

    cout << "l2 is" << endl;
    showlist(l2);
    
    l1.swap(l2);
    
    cout << "after swaping" << endl;
    cout << "l1 is" << endl;
    showlist(l1);

    cout << "l2 is" << endl;
    showlist(l2);
    return 0;
}
