// Creating multiple stacks with different sizes

#include <iostream>

using namespace std;

#define MAX_SIZE 100

class stack
{
    int top[10];
    int a[MAX_SIZE];
    int boundary[10];

public:
    stack(int n, int *sizes);
    void push(int, int);
    void pop(int);
    void display(int);
};

stack::stack(int n, int *sizes)
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
    int *sizes = {1, 2, 3, 4};
    stack s(5, sizes);
    s.push(1, 5);
    s.display(1);
}