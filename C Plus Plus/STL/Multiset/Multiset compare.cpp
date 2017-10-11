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
    multiset<int> :: key_compare cmp;
    
    for(int i=1; i<5; i++)
        s.insert(i);
    
    cmp = s.key_comp();
    cout << "multiset contains" << endl;
    showSet(s);
    itr = s.begin();
    while( cmp( *(itr), 4) )
    {
        cout << *itr << " ";
        itr++;
    }
    return 0;
}
