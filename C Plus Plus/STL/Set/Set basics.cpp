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
    
    cout << "s.begin() " << *s.begin() << endl;
    cout << "*s.begin()+1 " << *s.begin()+1 << endl;
    
    cout << "*s.rbegin() " << *s.rbegin() <<endl;
    cout << "*s.rbegin()+1 " << *s.rbegin()+1 << endl;
    
    cout << "s.size() " << s.size() << endl;
    cout << "s.empty() " << s.empty() << endl;
    s.clear();
    return 0;
}
