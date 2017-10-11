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
    
    s.emplace(30);
    s.emplace(20);
    s.emplace(35);
    s.emplace(23);
    
    s.pop();
    
    cout << "stack contains" << endl;
    showStack(s);
    return 0;
}
