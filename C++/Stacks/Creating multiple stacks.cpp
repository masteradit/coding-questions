// Creating multiple stacks

#include <iostream>

using namespace std;

#define MAX_SIZE 20

class stack
{
    int top[10];
    int a[50];
    int boundary[10];

public:
    stack(int);
    void push(int, int);
    void pop(int);
    void display(int);
};

stack::stack(int n)
{
    for (int i = 0; i < n; i++)
    {
        boundary[i] = top[i] = (MAX_SIZE / n) * i - 1;
    }
}

void stack::push(int i, int x)
{
    if ((top[i] == boundary[i + 1]) || (top[i] == (MAX_SIZE - 1)))
    {
        cout << "Stack is full\n";
    }
    else
    {
        a[++top[i]] = x;
    }
}
void stack::pop(int i)
{
    if (top[i] == boundary[i])
    {
        cout << "stack is empty\n";
    }
    else
    {
        cout << "deleted element is" << (a[top[i]--]);
    }
}

void stack::display(int i)
{
    if (top[i] == boundary[i])
        cout << "stack is empty\n";
    else
    {
        for (int j = top[i]; j > boundary[i]; j--)
        {
            cout << a[j];
        }
    }
}

int main()
{
    stack s(5);
    s.push(1, 5);
    s.display(1);
}