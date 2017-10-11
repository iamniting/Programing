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
    
    q.emplace(20);
    q.emplace(34);
    q.emplace(33);
    q.emplace(38);
    q.pop();
    
    cout << "queue contains" << endl;
    showQueue(q);
    
    
    return 0;
}
