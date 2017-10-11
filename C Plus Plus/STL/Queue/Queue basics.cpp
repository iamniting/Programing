#include <iostream>
#include <queue>
using namespace std;

void showQueue(queue<int> q)
{
    while(! q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;
    
    q.push(30);
    q.push(20);
    q.push(35);
    q.push(23);
    
    q.pop();
    
    cout << "queue contains" << endl;
    showQueue(q);
    
    cout << "q.front() " << q.front() << endl;
    cout << "q.front()+2 " << q.front()+2 << endl;
    
    cout << "q.back() " << q.back() << endl;
    cout << "q.back()+2 " << q.back()+2 << endl;
    
    cout << "q.size() " << q.size() << endl;
    cout << "q.empty() " << q.empty() << endl;
    return 0;
}
