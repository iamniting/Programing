#include<iostream>
#include<map>
using namespace std;

int main()
{
    string s, r;
    map <string, int> record;
    
    s = "i am nitin am am goyal goyal"; 
    
    for(int i=0; i<=s.size(); i++)
    {
        
        if(s[i] == ' ' || s[i] == '\0')
        {
            map<string, int>::iterator itr = record.find(r);
            if(itr != record.end())
            {
                itr->second = itr->second + 1;
            }
            else
            {
                record.insert(make_pair(r, 1));
            }
            r = "";
        }
        else
        {
            r = r + s[i];
        }
    }
    
    map<string, int>::iterator itr;
    
    for(itr = record.begin(); itr != record.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
    
    return 0;
}
