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
    
    pq.emplace(5);
    pq.emplace(4);
    pq.emplace(7);
    pq.emplace(10);
    pq.emplace(7);
    pq.emplace(1);
    
    cout << "priority queue contains" << endl;
    showpq(pq);
    return 0;
}
