#include <iostream>

using namespace std;

#define MAXSIZE 20

class queue
{
private:
    int item, i, q[MAXSIZE], front, rear;

public:
    queue()
    {
        front = -1;
        rear = -1;
    }
    void remove();
    void insert(int);
    void display();
};

void queue::insert(int num)
{
    if (rear == MAXSIZE - 1)
    {
        cout << "Queue is full";
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    q[++rear] = num;
}

void queue::remove()
{
    if (front == rear)
    {
        cout << "Queue is empty";
        return;
    }
    cout << "Item deleted is " << q[front++] << "\n";
}

void queue::display()
{
    for (i = front; i <= rear; i++)
    {
        cout << q[i] << " ";
    }
}

int main()
{
    queue q;
    q.insert(1);
    q.insert(2);
    q.insert(3);
    q.insert(4);
    q.insert(5);
    q.remove();
    q.remove();
    q.display();
    return 0;
}