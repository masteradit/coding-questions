#include <iostream>

using namespace std;

class node
{
    int info;
    node *next;

public:
    node(){};
    void insert_beg();
    void insert_end();
    void insert_pos();
} * head;

void node::insert_end()
{
    node *cur;
    cur = head;
    node *temp = new node;
    cout << "Enter the value.\n";
    cin >> temp->info;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        while (cur->next != NULL)
        {
            cur = cur->next;
        }
        cur->next = temp;
    }
}

// Check this
void node::insert_beg()
{
    node *temp;
    cout << "Enter the value.\n";
    cin >> temp->info;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
    }
}

// Check this
void node::insert_pos() {
    node *t;
}

int main()
{
    node n;
    n.insert_end();
}