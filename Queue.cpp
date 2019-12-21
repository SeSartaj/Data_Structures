#include <iostream>
#include <vector>

const int MAX_LIMIT = 5;
struct Queue{
    int Front=0, Rear=-1;
    int data[MAX_LIMIT];
};

void Enqueue(Queue *head, int input)
{
    head->Rear++;
    if(head->Rear > MAX_LIMIT)
    {
        std::cout << "Overflow" <<endl;
    }
    head->data[head->Rear]= input;
}
void Dequeue(Queue *head)
{
    if(head->Front > head->Rear || head->Front < 0)
    {
        std::cout << "underflow" << std::endl;
        return;
    }
    std::cout << head->data[head->Front] << std::endl;
    head->Front++;
}

frontValue(Queue *head)
{
    std::cout << head->data[head->Front] << std::endl;
}

rearValue(Queue *head)
{
    std::cout << head->data[head->Rear] << std::endl;
}

Display(Queue *head)
{
    for(int i = head->Front, j = head->Rear; i <= j; i++)
    {
        std::cout << head->data[i] << "  " ;
    }
    std::cout << std::endl;
}

using namespace std;
int main()
{
    Queue myQueue;
    int op;

    while(true)
    {
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Front" << endl;
        cout << "4. Rear" << endl;
        cout << "5. Display" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter an option : ";
        while(!(cin >> op) || op > 6 || op < 1)
        {
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Try again: ";
        }


        switch(op)
        {
        case 1:
            int x;
            cout << "Enter number to enqueue: " ;
            cin >> x;
            Enqueue(&myQueue, x);
            break;
        case 2:
            Dequeue(&myQueue);
            break;
        case 3:
            frontValue(&myQueue);
            break;
        case 4:
            rearValue(&myQueue);
            break;
        case 5:
            Display(&myQueue);
            break;
        case 6:
            return 0;

        }
    }

}
