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
    
    itr = s.emplace(22);
    cout << *itr << endl;
    
    itr = s.insert(20);
    cout << *itr << endl;
    
    cout << "multiset contains" << endl;
    showSet(s);
    return 0;
}
