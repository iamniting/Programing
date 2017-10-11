#include <iostream>
#include <set>
using namespace std;

void showSet(multiset<int> s)
{
    multiset<int>::iterator it;
    for(it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
        cout << endl;
}

int main()
{
    multiset<int> s;
    multiset<int> :: iterator itr;
    int count;
    
    for(int i=0; i<10; i++)
        s.insert(i);
    s.insert(2);
    s.insert(3);
    
    cout << "multiset contains" << endl;
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
