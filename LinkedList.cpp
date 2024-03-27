#include <iostream>
#include "LinkedList.h"

using namespace std;


template<typename T> LinkedList<T>::LinkedList(){

    count = 0;
    start = NULL;
    end = NULL;
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



template<typename T>T LinkedList<T>:: getItem(int index){
    node<T> *p;
    p = start;
    if (index < 0 || index >=count){
        throw out_of_range("");
    } 

    for (int i = 0; i < index; i++){
        p = p->next;
    }

    return p->value;
}
template<typename T>void LinkedList<T>::insertItem(T item, int index){
    node<T> *p;
    p = start;

    if (index < 0 || index >count){
        throw out_of_range("");
    } 
    node<T>  *newnode = new node<T>;
    newnode->value = item;   

    if (index ==0){
        newnode->next = start;
        start  = newnode;
    }
    else if (index == count){
        end->next = newnode;
        end = newnode;
        end->next = NULL;
    }
    else{
        for (int i = 0; i < index-1; i++){
            p = p->next;
        }

        newnode->next = p->next;
        p->next = newnode;
    }

    count++;

};
template<typename T>T LinkedList<T>::pop(){
    T value;
    if(count == 0){
        throw out_of_range("Out of Range");
    }
    else if(count ==1){
        value = end->value;
        delete end;
        start = NULL;
        end = NULL;
    }
    else{
        node<T> *p = start;
        while (p->next != end){
            p = p->next;
        }
        value = end->value;
        delete end;
        end = p;
        end->next = NULL;
    }
    
    count --;
    return value;


};




template<typename T>
T LinkedList::pop(int index){
    if (index < 0 || index >= count){
        throw out_of_range("Out of Range")
    }
    
    if (count == 1){
        delete start;
        start = NULL;
        end = NULL;
    }
    else if(index == 0){
        node<T>* temp = start;
        start = start->next;
        delete temp;
    }
    else{
        node<T>* prev = start;
        for(int i = 0;i < index -1; ++i){
            prev = prev->next;
        }
        node<T>* temp = prev->next:
        prev->next = temp->next;
        delete temp;
        if (index == count -1){
            end = prev;
        }
    }
    count --;
}

template<typename T>
void LinkedList::remove(int item){
    if (count == 0){
        cout <<"The list is empty"<<endl;
    }
    if(start->value == item){
        node<T>* temp = start;
        start start->next;
        delete temp;
        if(count == 1){
            end = NULL;
        }
        count--;
        return;
    }

    node<T>* prev = start;
    node<T>* corrent = start->next;

    while(current != NULL && current->value != item){
        prev = current;
        current = current->next;
    }

    if(current != NULL){
        prev->next = current->next;
        delete current;
        if(prev->next == NULL){
            end = prev;
        }
        count --;
    }

}
