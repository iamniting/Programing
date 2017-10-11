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
    queue<int> q1;
    queue<int> q2;
    
    for(int i=0; i<5; i++)
        q1.push(i);
    for(int i=5; i<10; i++)
        q2.push(i);
        
    cout << "queue1 contains" << endl;
    showQueue(q1);
    cout << "queue2 contains" << endl;
    showQueue(q2);
    
    cout << "after swaping" << endl;
    cout << "queue1 contains" << endl;
    showQueue(q1);
    cout << "queue2 contains" << endl;
    showQueue(q2);
    return 0;
}
