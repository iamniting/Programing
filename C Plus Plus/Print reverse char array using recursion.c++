#include <iostream>
using namespace std;

void print_string(char * ptr)
{
    if(*ptr == '\0')
        return;
    print_string(ptr + 1);
    cout << *ptr;
}

int main()
{
    char str[] = "Hello";
    //char * ptr = &str;
    print_string(str);
    return 0;
}
