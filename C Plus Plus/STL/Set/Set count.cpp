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
	
    cout << "s.count(2) " << s.count(2) << endl;
    cout << "s.count(22) " << s.count(22) << endl;
	return 0;
}
