#include "queue.h"
#include <iostream>

template <typename T>
Queue<T>::Queue() : front(-1), rear(-1) {}

template <typename T>
bool Queue<T>::IsEmpty() const {
    return front == -1;
}

template <typename T>
bool Queue<T>::IsFull() const {
    return (rear + 1) % MAX_SIZE == front;
}

template <typename T>
void Queue<T>::Enqueue(const T& value) {
    if (IsFull()) {
        std::cout << "Queue is full. Cannot enqueue.\n";
        return;
    }

    if (IsEmpty()) {
        front = rear = 0;
    }
    else {
        rear = (rear + 1) % MAX_SIZE;
    }

    elements[rear] = value;
}

template <typename T>
void Queue<T>::Dequeue() {
    if (IsEmpty()) {
        std::cout << "Queue is empty. Cannot dequeue.\n";
        return;
    }

    if (front == rear) {
        front = rear = -1;
    }
    else {
        front = (front + 1) % MAX_SIZE;
    }
}

template <typename T>
void Queue<T>::Show() const {
    if (IsEmpty()) {
        std::cout << "Queue is empty.\n";
        return;
    }

    int index = front;
    while (index != rear) {
        std::cout << elements[index] << " ";
        index = (index + 1) % MAX_SIZE;
    }
    std::cout << elements[rear] << std::endl;
}

template class Queue<int>;  
