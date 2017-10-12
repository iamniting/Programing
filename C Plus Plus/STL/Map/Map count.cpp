#include <iostream>
#include <map>
using namespace std;

void showMap(map<int, int> m)
{
    map<int, int> :: iterator itr;
    for(itr=m.begin(); itr!=m.end(); itr++)
        cout << itr->first << " " << itr->second << endl;
}

int main()
{
    map<int, int> m;
    
    m.insert(make_pair(10, 2));
    m.insert(make_pair(21, 4));
    m.insert(make_pair(18, 4));
    m.insert(make_pair(18, 6));
    m.insert(make_pair(22, 4));
    cout << "map contains" << endl;
    showMap(m);
    
    cout << "m.count(10) " << m.count(10) << endl;
    cout << "m.count(2) " << m.count(2) << endl;
    return 0;
}
