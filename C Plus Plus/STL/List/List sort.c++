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

bool cmp(int a, int b)
{
    if(a < b)
        return false;
    else
        return true;
}

int main()
{
    list<int> l;
    list<int>::iterator itr;

    for(int i=8; i>0; i--)
        l.push_back(i * 10);

    cout << "list is" << endl;
    showlist(l);

    l.sort();
    cout << "after sorting" << endl;
    showlist(l);
    
    l.sort(cmp);
    cout << "after sorting in descending order" << endl;
    showlist(l);
    return 0;
}
