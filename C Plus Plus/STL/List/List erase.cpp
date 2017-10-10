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

    itr = l.begin();
    itr++;
    l.erase(itr);
    cout << "after erase 2nd element" << endl;
    showlist(l);
    
    itr = l.begin();
    itr++;
    itr++;
    itr++;
    l.erase(l.begin(), itr);
    cout << "after erase 1st to 3rd element" << endl;
    showlist(l);
    
    l.clear();
    cout << "after clear list" << endl;
    showlist(l);
    return 0;
}
