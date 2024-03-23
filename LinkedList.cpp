#include <iostream>
#include "LinkedList.h"

using namespace std;

template<typename T> LinkedList<T>::initialize(){

    count = 0;
    start = NULL;
    end = NULL;
               ///This is what I forgot
}

template<typename T>void LinkedList<T>::addItem(T item){
    node<T>  *newnode = new node<T>;
   // newnode.value = item;  // illegal
   //(*newnode).value = item;  // legal but ugly
    newnode->value = item;   // somewhat nice -> means pointer!
    if (count == 0){
        start = newnode;
        end = newnode;
    }
    else{
        end->next  = newnode;
        end = newnode;
    }
    count ++;
}


template<typename T>void LinkedList<T>::printList(){
    node<T> *p;
    p = start;
    while (p != NULL){
        cout << p->value << endl;
        p = p->next;
    }
}



int getItem(LinkedList ll, int index){
    node *p;
    p = ll.start;
    if (index < 0 || index >=ll.count){
        throw out_of_range("");
    } 

    for (int i = 0; i < index; i++){
        p = p->next;
    }

    return p->value;
}
void insertItem(LinkedList &ll, int item, int index){
    node *p;
    p = ll.start;

    if (index < 0 || index >ll.count){
        throw out_of_range("");
    } 
    node  *newnode = new node;
    newnode->value = item;   

    if (index ==0){
        newnode->next = ll.start;
        ll.start  = newnode;
    }
    else if (index == ll.count){
        ll.end->next = newnode;
        ll.end = newnode;
        ll.end->next = NULL;
    }
    else{
        for (int i = 0; i < index-1; i++){
            p = p->next;
        }

        newnode->next = p->next;
        p->next = newnode;
    }

    ll.count++;

}
// int pop(LinkedList &ll);
// int pop(LinkedList &ll, int index);
// void remove(LinkedList &ll, int item);