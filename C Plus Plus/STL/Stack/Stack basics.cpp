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
    stack<int> s;
    
    s.push(30);
    s.push(20);
    s.push(35);
    s.push(23);
    
    s.pop();
    
    cout << "stack contains" << endl;
    showStack(s);
    
    cout << "s.top() " << s.top() << endl;
    cout << "s.top()+2 " << s.top()+2 << endl;
    
    cout << "s.size() " << s.size() << endl;
    cout << "s.empty() " << s.empty() << endl;
    return 0;
}
