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
    list<int> l;
    list<int>::iterator itr;

    for(int i=1; i<=8; i++)
        l.push_back(i * 10);

    cout << "list is" << endl;
    showlist(l);

    l.remove(20);
    cout << "after remove 20" << endl;
    showlist(l);
    return 0;
}
