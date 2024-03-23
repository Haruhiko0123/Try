
#ifndef __LinkedList__h
#define __LinkedList__h

template<typename T>
struct node {
    T value;
    node<T> *next;
};

template<typename T>
class LinkedList{
    public:
        initialize();
        void addItem(T item);
        void printList();
        T getItem(int index);
        void insertItem(T item, int index);
        T pop();
        T pop(int index);
        void remove(T item);
    private:
        T count;
        node<T> *start;
        node<T> *end;

}


#include "LinkedList.cpp"


#endif