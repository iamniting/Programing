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
    
    s.insert(2);
    s.insert(3);
    
    int a[] = {1, 2, 3, 10};
    s.insert(a, a+4);
    
    cout << "multiset contains" << endl;
    showSet(s);
    return 0;
}
