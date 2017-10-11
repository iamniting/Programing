#include <iostream>
#include <stack>
using namespace std;

void showStack(stack<int> s)
{
    while(! s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> s1;
    stack<int> s2;
    
    for(int i=0; i<5; i++)
        s1.push(i);
    for(int i=5; i<9; i++)
        s2.push(i);
        
    cout << "stack1 contains" << endl;
    showStack(s1);
    cout << "stack2 contains" << endl;
    showStack(s2);
    
    swap(s1, s2);
    cout << "after swaping" << endl;
    cout << "stack1 contains" << endl;
    showStack(s1);
    cout << "stack2 contains" << endl;
    showStack(s2);
    return 0;
}
