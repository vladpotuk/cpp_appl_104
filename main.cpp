#include "queue.h"

int main() {
    Queue<int> myQueue;

    myQueue.Enqueue(10);
    myQueue.Enqueue(20);
    myQueue.Enqueue(30);

    myQueue.Show(); 

    myQueue.Dequeue();

    myQueue.Show(); 

    return 0;
}
