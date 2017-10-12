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
    map<int, int> m1;
    map<int, int> m2;
    
    m1.insert(make_pair(10, 2));
    m1.insert(make_pair(21, 4));
    m1.insert(make_pair(18, 4));
    
    m2.insert(make_pair(2, 4));
    m2.insert(make_pair(12, 6));
    m2.insert(make_pair(14, 21));
    
    cout << "map1 contains" << endl;
    showMap(m1);
    cout << "map2 contains" << endl;
    showMap(m2);
    
    swap(m1, m2);
    cout << "after swaping" << endl;
    cout << "map1 contains" << endl;
    showMap(m1);
    cout << "map2 contains" << endl;
    showMap(m2);
    return 0;
}
