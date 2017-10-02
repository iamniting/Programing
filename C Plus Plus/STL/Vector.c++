#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> v1;
    vector<int>::iterator itr;
    vector<int>::reverse_iterator ritr; 
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.pop_back();

    v1.push_back(15);
    v1.push_back(25);
    v1.push_back(35);
    v1.push_back(45);

    cout << "vector have" << endl;
    for(itr = v.begin(); itr < v.end(); itr++)
        cout << *itr << " ";
        cout << endl;

    cout << "vector1 have" << endl;
    for(itr = v1.begin(); itr < v1.end(); itr++)
        cout << *itr << " ";
        cout << endl;

    cout << "front " << v.front() << endl;
    cout << "front+4 " << v.front()+4 << endl;

    cout << "back " << v.back() << endl;
    cout << "back+4 " << v.back()+4 << endl;

    cout << "begin " << *v.begin() << endl;
    cout << "begin+1 " << *v.begin()+1 << endl;
    cout << "(begin+1) " << *(v.begin()+1) << endl;

    cout << "(end-1)" << *(v.end()-1) << endl;
    
    cout << "rbegin " << *v.rbegin() <<endl;
    cout << "rbegin+1 " << *v.rbegin()+1 << endl;
    cout << "(rbegin+1) " << *(v.rbegin()+1) << endl;
    
    cout << "rend-1 " << *(v.rend()-1) <<endl;
    
    cout << "size " << v.size() << endl;
    cout << "empty " << v.empty() << endl;
    
    cout << "v[1] " << v[1] << endl;
    cout << "v.at(2) " << v.at(2) << endl;
    
    //assign will delete all previous elements
    v.assign(3, 10);
    cout << "after assign 3 times 10" << endl;
    for(itr = v.begin(); itr < v.end(); itr++)
        cout << *itr << " ";
        cout << endl;
    
    v.assign(v1.begin(),v1.begin()+2);
    cout << "after assign from vector1" << endl;
    for (itr = v.begin(); itr < v.end(); itr++)
        cout << *itr << " ";
        cout << endl;
    
    v.clear();
    cout << "after clear v" <<endl;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    
    cout << "vector have" << endl;
    for(itr = v.begin(); itr < v.end(); itr++)
        cout << *itr << " ";
        cout << endl;

    v.insert(v.begin()+1, 5);
    cout << "after insert 5" << endl;
    for(itr = v.begin(); itr < v.end(); itr++)
        cout << *itr << " ";
        cout << endl;
    
    v.insert(v.begin()+1, 2, 23);
    cout << "after insert 2 times 23" << endl;
    for(itr = v.begin(); itr < v.end(); itr++)
        cout << *itr << " ";
        cout << endl;
    
    v.insert(v.begin()+2, v1.begin(), v1.end());
    cout << "after insert from vector1" << endl;
    for(itr = v.begin(); itr < v.end(); itr++)
        cout << *itr << " ";
        cout << endl;
    
    v.erase(v.begin()+2);
    cout << "after erase 2nd element" << endl;
    for(itr = v.begin(); itr < v.end(); itr++)
        cout << *itr << " ";
        cout << endl;
    
    v.erase(v.begin()+2, v.begin()+4);
    cout << "after erase 2nd to 4th element" << endl;
    for(itr = v.begin(); itr < v.end(); itr++)
        cout << *itr << " ";
        cout << endl;
    
    itr = find(v.begin(), v.end(), 20);
    if(itr != v.end())
        cout << "20 find at " << itr-v.begin() << endl;
    
    
    sort(v.begin(), v.end());
    cout << "after sorting" << endl;
    for(itr = v.begin(); itr < v.end(); itr++)
        cout << *itr << " ";
        cout << endl;

    swap(v, v1);
    cout << "after swap" << endl;
    cout << "vector is" << endl;
    for(itr = v.begin(); itr < v.end(); itr++)
        cout << *itr << " ";
        cout << endl;
    cout << "vector1 is" << endl;
    for(itr = v1.begin(); itr < v1.end(); itr++)
        cout << *itr << " ";
        cout << endl;
    v.clear();
    v1.clear();
    return 0;
}
