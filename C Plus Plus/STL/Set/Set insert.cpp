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
    pair<set<int> :: iterator, bool> ret;
    
    s.insert(10);
    
    ret = s.insert(20);
    cout << *ret.first << endl; //pointer to a node where 20 store
    cout << ret.second << endl; //it tells element is inserted or not
    
    ret = s.insert(10);
    cout << *ret.first << endl;
    cout << ret.second << endl;
    
    int a[] = {1, 2, 3, 10};
    s.insert(a, a+4);
    
    cout << "set contains" << endl;
    showSet(s);
    return 0;
}
