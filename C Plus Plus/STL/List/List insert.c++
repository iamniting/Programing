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
        
    for(int i=1; i<=3; i++)
        l2.push_back((i * 10) + 5);

    cout << "l1 is" << endl;
    showlist(l1);
    
    cout << "l2 is" << endl;
    showlist(l2);

    itr = l1.begin();
    itr++;
    l1.insert(itr, 7);
    cout << "after insert 7" << endl;
    showlist(l1);

    itr = l1.begin();
    itr++;
    itr++;
    l1.insert(itr, 2, 17);
    cout << "after insert 17" << endl;
    showlist(l1);

    itr = l1.begin();
    itr++;
    itr++;
    l1.insert(itr, l2.begin(), l2.begin());
    cout << "after insert from l2" << endl;
    showlist(l1);
    return 0;
}
