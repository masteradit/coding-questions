// Take multiple words input.cpp

#include <iostream>

using namespace std;

int main()
{
    int length = 80;
    
    cout << "Enter a string: ";
    char str[length];
    cin.get(str, length);
    cout << str;

    return 0;
}
