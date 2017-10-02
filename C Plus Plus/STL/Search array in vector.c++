#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v;
	vector<int>::iterator itr;
	int ar[] = {20, 30, 40};
	
	for(int i=0; i<=5; i++)
	    v.push_back(i * 10);
	
    itr = search(v.begin(), v.end(), ar, ar+3);
    
    if(itr != v.end())
        cout << "ar find at " << itr-v.begin() << endl;
    else
        cout << "not find";
    return 0;
}
