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
    set<int> :: key_compare cmp;
    
    for(int i=1; i<5; i++)
        s.insert(i);
    
    cmp = s.key_comp();
    cout << "set contains" << endl;
    showSet(s);
    itr = s.begin();
    while( cmp( *(itr), 4) )
    {
        cout << *itr << " ";
        itr++;
    }
    return 0;
}
