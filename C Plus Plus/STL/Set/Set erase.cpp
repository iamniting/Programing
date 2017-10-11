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
    
    s.erase(2);
    cout << "after erase 2" << endl;
    showSet(s);
    
    itr = s.begin();
    itr++;
    itr++; //now itr points to 3
    
    s.erase(itr);
    cout << "after erase itr" << endl;
    showSet(s);
    
    itr = s.find(6);
    s.erase(itr, s.end());
    cout << "after erase 6 to end" << endl;
    showSet(s);
    return 0;
}
