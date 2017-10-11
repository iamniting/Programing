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
    priority_queue<int> pq1;
    priority_queue<int> pq2;
    
    for(int i=1; i<=5; i++)
        pq1.push(i);
    for(int i=6; i<=10; i++)
        pq2.push(i);
    cout << "priority queue1 contains" << endl;
    showpq(pq1);
    cout << "priority queue2 contains" << endl;
    showpq(pq2);
    
    swap(pq1, pq2);
    cout << "after swaping" << endl;
    cout << "priority queue1 contains" << endl;
    showpq(pq1);
    cout << "priority queue2 contains" << endl;
    showpq(pq2);
    return 0;
}
