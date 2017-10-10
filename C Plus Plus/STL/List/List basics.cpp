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
        l2.push_front(i * 10);

    cout << "l1 is" << endl;
    showlist(l1);

    cout << "l2 is" << endl;
    showlist(l2);

    l1.pop_front();
    cout << "after pop front of l1" << endl;
    showlist(l1);

    l1.pop_back();
    cout << "after pop back of l1" << endl;
    showlist(l1);

    cout << "front " << l1.front() << endl;
    cout << "front+4 " << l1.front()+4 << endl;

    cout << "back " << l1.back() << endl;
    cout << "back+4 " << l1.back()+4 << endl;

    cout << "begin " << *l1.begin() << endl;
    cout << "begin+1 " << *l1.begin()+1 << endl;

    cout << "end " << *l1.end() << endl;

    cout << "rbegin " << *l1.rbegin() <<endl;
    cout << "rbegin+1 " << *l1.rbegin()+1 << endl;

    cout << "rend-1 " << *l1.rend() <<endl;

    cout << "size " << l1.size() << endl;
    cout << "empty " << l1.empty() << endl;
    return 0;
}
