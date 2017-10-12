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
    
    m.emplace(make_pair(10, 2));
    m.emplace(make_pair(21, 4));
    m.emplace(make_pair(18, 4));
    
    cout << "map contains" << endl;
    showMap(m);
    
    m.clear();
    showMap(m);
    return 0;
}
