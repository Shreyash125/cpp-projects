#ifndef DATASTRUCTURES_HPP
#define DATASTRUCTURES_HPP

template <typename T>
class Stack {
private:
    struct Node {
        T data;
        Node* next;
        Node(T data) : data(data), next(nullptr) {}
    };
    Node* top;

public:
    Stack();
    ~Stack();
    void push(T data);
    void pop();
    T peek();
    bool isEmpty();
};

template <typename T>
class Queue {
private:
    struct Node {
        T data;
        Node* next;
        Node(T data) : data(data), next(nullptr) {}
    };
    Node* front;
    Node* rear;

public:
    Queue();
    ~Queue();
    void enqueue(T data);
    void dequeue();
    T front();
    bool isEmpty();
};

template <typename T>
class LinkedList {
private:
    struct Node {
        T data;
        Node* next;
        Node(T data) : data(data), next(nullptr) {}
    };
    Node* head;

public:
    LinkedList();
    ~LinkedList();
    void insert(T data);
    void remove(T data);
    bool search(T data);
    void display();
};

#include "DataStructures.tpp"

#endif // DATASTRUCTURES_HPP
