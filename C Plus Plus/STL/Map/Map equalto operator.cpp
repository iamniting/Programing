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
    
    m[3] = 5;
    m[2] = 6;
    m[4] = 7;
    
    cout << "map contains" << endl;
    showMap(m);
    return 0;
}
