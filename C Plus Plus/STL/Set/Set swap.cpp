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
    set<int> s1;
    set<int> s2;
    
    for(int i=1; i<5; i++)
        s1.insert(i);
        
    for(int i=5; i<10; i++)
        s2.insert(i);
        
    cout << "set1 contains" << endl;
    showSet(s1);
    cout << "set2 contains" << endl;
    showSet(s2);
    
    swap(s1, s2);
    cout << "after swaping" << endl;
    cout << "set1 contains" << endl;
    showSet(s1);
    cout << "set2 contains" << endl;
    showSet(s2);
    return 0;
}
