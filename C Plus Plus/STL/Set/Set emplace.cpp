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
    s.insert(22);
    s.insert(14);
    s.insert(16);
    s.insert(17);
    s.insert(16);
    s.insert(11);
    
    cout << "set contains" << endl;
    showSet(s);
    
    auto ret = s.emplace(22);
    
    cout << *ret.first << endl; //returns pointer to that node;
    cout << ret.second << endl; //returns element is inserted or not
    
    ret = s.emplace(20);
    
    cout << *ret.first << endl;
    cout << ret.second << endl;
    return 0;
}
