#include <iostream>
#include <queue>
using namespace std;

void showpq(priority_queue<int> pq)
{
    while(! pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

int main()
{
    priority_queue<int> pq;
    
    pq.push(5);
    pq.push(4);
    pq.push(7);
    pq.push(10);
    pq.push(7);
    pq.push(1);
    
    cout << "priority queue contains" << endl;
    showpq(pq);
    cout << "top " << pq.top() << endl;
    cout << "size " << pq.size() << endl;
    cout << "empty " << pq.empty() << endl;
    return 0;
}
