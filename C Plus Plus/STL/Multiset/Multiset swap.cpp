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
    multiset<int> s1;
    multiset<int> s2;
    
    for(int i=1; i<5; i++)
        s1.insert(i);
        
    for(int i=5; i<10; i++)
        s2.insert(i);
        
    cout << "multiset1 contains" << endl;
    showSet(s1);
    cout << "multiset2 contains" << endl;
    showSet(s2);
    
    swap(s1, s2);
    cout << "after swaping" << endl;
    cout << "multiset1 contains" << endl;
    showSet(s1);
    cout << "multiset2 contains" << endl;
    showSet(s2);
    return 0;
}
