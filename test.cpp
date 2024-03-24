#include <iostream>
#include "LinkedList.h"


using namespace std;

int main(){
    int num;
	LinkedList<int> myList;
	LinkedList<string> myStringList;
	
	
    string words[] = {"This","is","fun","really","really","fun"};

    cout << "Creating a list of integers" <<endl;
    
    for (int i = 0; i <5; i++){
        myList.addItem(i);
    }
    cout << "List contains values 0 through 4" <<endl;
    myList.printList();

    cout << "Removing Elements" <<endl;
    for (int i = 0; i <5; i++){
        cout << myList.pop();
    }
    cout << "List is empty" <<endl;
    myList.printList();

    // cout << "Inserting at end";
    //  for (int i = 0; i <5; i++){
    //     myList.insert(i,i);
    //  }
    // cout << "After Insertion" <<endl;
    // myList.printList();

    // cout << "Clearing list with pop(i)" <<endl;
    // while (myList.getCount() != 0){
    //     cout << myList.pop(0);
    // }

    // cout << "List is empty" <<endl;
    // myList.printList();

    // cout << "Inserting at beginning";
    //  for (int i = 0; i <5; i++){
    //      myList.insert(0,0);
    //  }
    
    // cout << "List contains all zeros" <<endl;
    // myList.printList();

    // cout << "Clearing list with pop(i)" <<endl;
    // while (myList.getCount() != 0){
    //     cout << myList.pop(0);
    // }
    // cout << "List is empty" <<endl;
    // myList.printList();

    // cout << "Inserting in the middle";
    // myList.addItem(0);
    // myList.addItem(10);
    // myList.insert(1,1);
    // myList.insert(2,2);
    // myList.printList();

    // cout << "Removing (left with only a 2 and 10)"<<endl;
    // myList.addItem(100);
    // myList.remove(100);
    // myList.remove(1);
    // myList.remove(0);
    // myList.printList();



    // cout << "Testing large list" <<endl;
    // for (int i = 0; i <100; i++){
    //     myList.addItem(i);
    // }
    // for (int i = 0; i <5; i++){
    //      myList.insert(0,0);
    //  }
    
    // cout << "Creating a list of strings" <<endl;
    
    // for (int i = 0; i <5; i++){
    //     myStringList.addItem(words[i]);
    // }
    // myStringList.printList();

    // cout << myStringList.pop();
    // cout << myStringList.pop(0);
    // myStringList.remove("really");
    // myStringList.printList();
	return 0;
 }