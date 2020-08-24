// Creating a stack

#include <iostream>

using namespace std;

#define MAX 1000

class Stack
{
private:
    int top;

public:
    int a[MAX];

    Stack()
    {
        top = -1;
    }

    bool push(int num);
    int pop();
    int peek();
    void display();
    bool isEmpty();
};

bool Stack::push(int num)
{
    if (top >= (MAX - 1))
    {
        cout << "Stack Overflow";
        return false;
    }
    else
    {
        a[++top] = num;
        cout << num << " pushed into stack\n";
        return true;
    }
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}

int Stack::peek()
{
    if (top < 0)
    {
        cout << "Stack is empty";
        return 0;
    }
    else
    {
        int x = a[top];
        return x;
    }
}

void Stack::display() {
    for (int i = 0; i <= top; i++) {
        cout << a[i] << " ";
    }
}

bool Stack::isEmpty() {
    if (top < 0) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.peek();
    s.display();
    cout << "\n" << s.isEmpty();
}