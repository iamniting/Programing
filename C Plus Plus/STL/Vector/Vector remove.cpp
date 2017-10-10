#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void showVector(vector<int> v)
{
    vector<int>::iterator itr;
    for(itr = v.begin(); itr < v.end(); itr++)
        cout << *itr << " ";
        cout << endl;
}

int main()
{
    vector<int> v {10, 20, 30, 40, 20, 10, 20};
    vector<int>::iterator itr;
    vector<int>::iterator i;

    cout << "vector is" << endl;
    showVector(v);

    itr = remove(v.begin(), v.end(), 20);
    cout << "after remove 20 in vector" << endl;
    showVector(v);
    
    cout << "without show function" << endl;
    for(i=v.begin(); i!=itr; i++)
        cout << *i << " ";
        cout << endl;
        
    cout << "itr lies after range" << endl;
    cout << *itr << endl;
    cout << *(itr+1);
    return 0;
}
