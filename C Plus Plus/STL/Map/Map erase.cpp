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
    
    m.erase(18);
    cout << "after erase 18" << endl;
    cout << "map contains" << endl;
    showMap(m);
    
    itr = m.begin();
    itr++;
    m.erase(itr);
    cout << "after erase itr" << endl;
    cout << "map contains" << endl;
    showMap(m);
    
    itr = m.find(21);
    m.erase(m.begin(), itr);
    cout << "after erase begin to itr range" << endl;
    cout << "map contains" << endl;
    showMap(m);
    return 0;
}
