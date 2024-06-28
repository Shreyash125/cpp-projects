#include "DataStructures.hpp"
#include <iostream>

// Stack Implementation

template <typename T>
Stack<T>::Stack() : top(nullptr) {}

template <typename T>
Stack<T>::~Stack() {
    while (!isEmpty()) {
        pop();
    }
}

template <typename T>
void Stack<T>::push(T data) {
    Node* newNode = new Node(data);
    newNode->next = top;
    top = newNode;
}

template <typename T>
void Stack<T>::pop() {
    if (isEmpty()) {
        std::cout << "Stack is empty.\n";
        return;
    }
    Node* temp = top;
    top = top->next;
    delete temp;
}

template <typename T>
T Stack<T>::peek() {
    if (isEmpty()) {
        std::cout << "Stack is empty.\n";
        return T(); // Return default value
    }
    return top->data;
}

template <typename T>
bool Stack<T>::isEmpty() {
    return top == nullptr;
}

// Queue Implementation

template <typename T>
Queue<T>::Queue() : front(nullptr), rear(nullptr) {}

template <typename T>
Queue<T>::~Queue() {
    while (!isEmpty()) {
        dequeue();
    }
}

template <typename T>
void Queue<T>::enqueue(T data) {
    Node* newNode = new Node(data);
    if (rear) {
        rear->next = newNode;
    } else {
        front = newNode;
    }
    rear = newNode;
}

template <typename T>
void Queue<T>::dequeue() {
    if (isEmpty()) {
        std::cout << "Queue is empty.\n";
        return;
    }
    Node* temp = front;
    front = front->next;
    if (!front) {
        rear = nullptr;
    }
    delete temp;
}

template <typename T>
T Queue<T>::front() {
    if (isEmpty()) {
        std::cout << "Queue is empty.\n";
        return T(); // Return default value
    }
    return front->data;
}

template <typename T>
bool Queue<T>::isEmpty() {
    return front == nullptr;
}

// LinkedList Implementation

template <typename T>
LinkedList<T>::LinkedList() : head(nullptr) {}

template <typename T>
LinkedList<T>::~LinkedList() {
    Node* current = head;
    while (current) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

template <typename T>
void LinkedList<T>::insert(T data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

template <typename T>
void LinkedList<T>::remove(T data) {
    Node* current = head;
    Node* previous = nullptr;
    while (current && current->data != data) {
        previous = current;
        current = current->next;
    }
    if (!current) {
        std::cout << "Data not found in the list.\n";
        return;
    }
    if (previous) {
        previous->next = current->next;
    } else {
        head = current->next;
    }
    delete current;
}

template <typename T>
bool LinkedList<T>::search(T data) {
    Node* current = head;
    while (current) {
        if (current->data == data) {
            return true;
        }
        current = current->next;
    }
    return false;
}

template <typename T>
void LinkedList<T>::display() {
    Node* current = head;
    while (current) {
        std::cout << current->data << " -> ";
        current = current->next;
   
