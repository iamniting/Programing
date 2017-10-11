#include <iostream>
#include <set>
using namespace std;

void showSet(set<int> s)
{
    set<int>::iterator it;
    for(it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
        cout << endl;
}

int main()
{
    set<int> s;
    set<int> :: iterator itr;

    for(int i=0; i<10; i++)
        s.insert(i);

    cout << "set contains" << endl;
    showSet(s);

    itr = s.find(6);
    if(itr != s.end())
        cout << "element found" << endl;
    else
        cout << "element not found" << endl;

    itr = s.find(10);
    if(itr != s.end())
        cout << "element found" << endl;
    else
        cout << "element not found" << endl;
    return 0;
}
