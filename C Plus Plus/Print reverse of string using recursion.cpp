#include <iostream>
using namespace std;

void print_string(const char * ptr)
{
    if(*ptr == '\0')
        return;
    print_string(ptr + 1);
    cout << *ptr;
}

int main()
{
    string str = "Hello";
    print_string(str.c_str());
    return 0;
}
