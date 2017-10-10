#include <iostream>
#include <queue>
using namespace std;

void showdq(deque<int> dq)
{
    deque<int> :: iterator itr;
    for(itr=dq.begin(); itr!=dq.end(); itr++)
        cout << *itr << " ";
        cout << endl;
}

int main()
{
    deque<int> dq;
    
    dq.push_back(40);
    dq.push_back(55);
    dq.push_back(67);
    dq.push_back(78);
    dq.push_front(19);
    dq.push_front(23);
    
    cout << "deque contains" << endl;
    showdq(dq);
    
    cout << "dq.front()  " << dq.front() << endl;
    cout << "dq.front()+10  " << dq.front()+10 << endl;
    
    cout << "dq.back()  " << dq.back() << endl;
    cout << "dq.back()+4  " << dq.back()+4 << endl;
    
    cout << "*dq.begin()  " << *dq.begin() << endl;
    cout << "*dq.begin()+1  " << *dq.begin()+1 << endl;
    cout << "*(dq.begin()+1)  " << *(dq.begin()+1) << endl;
    
    cout << "*(dq.end()-1)  " << *(dq.end()-1) << endl;
    
    cout << "*dq.rbegin()  " << *dq.rbegin() <<endl;
    cout << "*dq.rbegin()+1  " << *dq.rbegin()+1 << endl;
    cout << "*(dq.rbegin()+1)  " << *(dq.rbegin()+1) << endl;
    
    cout << "*(dq.rend()-1)  " << *(dq.rend()-1) <<endl;
    
    cout << "dq[1]  " << dq[1] << endl;
    cout << "dq.at(2)  " << dq.at(2) << endl;
    
    cout << "dq.size()  " << dq.size() << endl;
    cout << "dq.empty()  " << dq.empty() << endl;
    return 0;
}
