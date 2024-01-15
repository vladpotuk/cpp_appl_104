#ifndef QUEUE_H
#define QUEUE_H

template <typename T>
class Queue {
private:
    static const int MAX_SIZE = 100; 
    T elements[MAX_SIZE]; 
    int front; 
    int rear; 

public:
    Queue();
    bool IsEmpty() const; 
    bool IsFull() const; 
    void Enqueue(const T& value); 
    void Dequeue(); 
    void Show() const; 
};

#endif

