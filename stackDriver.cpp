//*****************************************************************************************************
//
//		File:					stackDriver.cpp
//
//		This program program will use array based Stack and test a stack data stracture.
//	
//		Other files required: 
//			1.	stack.h
//			
//*****************************************************************************************************

#include <iostream>
using namespace std;
#include "stack.h"

//*****************************************************************************************************

int main() 
{
    Stack<int> myStack(50);

    myStack.push(1);
    
    
   

    int peeked_item;

    if (myStack.push(2))
    {
        cout << "successfully pushed " << endl;
        myStack.peek(peeked_item);
        cout << "the top item is " << peeked_item << endl;
        cout << "There are " << myStack.getNumValues() << " items." << endl;
    }
    else
    {
        cout << "unable to push." << endl;

    }

    cout << endl;

    if (myStack.isEmpty())
    {
        cout << "The list is empty." << endl;

    }
    else
    {
        cout << "the list is not empty." << endl;

    }

    if (myStack.isFull())
    {
        cout << "The list is full." << endl;

    }
    else
    {
        cout << "the list is not full." << endl;

    }

    cout << endl;

    if (myStack.pop(peeked_item))
    {
        cout << "successfully popped " << endl;
        myStack.peek(peeked_item);
        cout << "the top item is " << peeked_item << endl;
        cout << "There are " << myStack.getNumValues() << " items." << endl;
    }
    else
    {
        cout << "unable to pop." << endl;

    }

    cout << endl;

    if (myStack.isEmpty())
    {
        cout << "The list is empty." << endl;

    }
    else
    {
        cout << "the list is not empty." << endl;

    }

    if (myStack.isFull())
    {
        cout << "The list is full." << endl;

    }
    else
    {
        cout << "the list is not full." << endl;

    }
    cout << endl;

    return 0;
}

//*****************************************************************************************************
