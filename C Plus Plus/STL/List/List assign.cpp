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
    
    //assign will delete all previous elements
    l1.assign(2, 33);
    cout << "after assign 2 times 33" << endl;
    showlist(l1);
    
    itr = l2.begin();
    itr++;
    itr++;
    itr++;
    l1.assign(l2.begin(), itr);
    cout << "after assigning from l2" << endl;
    showlist(l1);
    return 0;
}
