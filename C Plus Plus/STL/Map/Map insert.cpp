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
    map<int, int> m1;
    map<int, int> :: iterator itr;
    
    m.insert(make_pair(10, 2));
    m.insert(make_pair(21, 4));
    m.insert(make_pair(18, 4));
    m.insert(make_pair(18, 6));
    m.insert(make_pair(22, 4));
    m.insert(make_pair(11, 3));
    m.insert(make_pair(13, 14));
    m.insert(make_pair(7, 8));
    
    cout << "map contains" << endl;
    showMap(m);
    
    itr = m.find(13);
    m1.insert(m.begin(), itr);
    cout << "insert some elements of map to map1 in range" << endl;
    showMap(m1);
    return 0;
}
