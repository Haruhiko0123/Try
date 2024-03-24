
#ifndef __LinkedList__h
#define __LinkedList__h

template<typename T>
struct node {
    T value;
    node *next;
};

template<typename T>
class LinkedList{
    public:
        LinkedList();
        void addItem(T item);
        void printList();
        T getItem(int index);
        void insertItem(T item, int index);
        T pop();
        T pop(int index);
        void remove(T item);
        void insert(T item, int location);
    private:
        int count;
        node<T> *start;
        node<T> *end;

};


#include "LinkedList.cpp"


#endif