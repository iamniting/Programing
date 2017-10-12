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
    
    cout << "map contains" << endl;
    showMap(m);
    
    cout << "m.begin()->first " << m.begin()->first << endl;
    cout << "m.begin()->second " << m.begin()->second << endl;
    cout << "m.begin()->first+1 " << m.begin()->first+1 << endl;
    cout << "m.begin()->second+1 " << m.begin()->second+1 << endl;
    
    cout << "m.rbegin()->first " << m.rbegin()->first << endl;
    cout << "m.rbegin()->second " << m.rbegin()->second << endl;
    cout << "m.rbegin()->first+1 " << m.rbegin()->first+1 << endl;
    cout << "m.rbegin()->second+1 " << m.rbegin()->second+1 << endl;
    
    cout << "m.size() " << m.size() << endl;
    cout << "m.empty() " << m.empty() << endl;
    
    cout << "m[10] " << m[10] << endl;
    cout << "m[9] " << m[9] << endl;
    cout << "m.at(10) " << m.at(10) << endl;
    cout << "m.at(9) " << m.at(9) << endl;
    return 0;
}
