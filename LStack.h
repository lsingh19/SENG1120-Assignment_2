/*
 * File Name: LStack.h
 * Course: SENG1120
 * Assessment Title: Assignment 2
 * Last Modified: 10/05/2019
 * Notes: This is a Stack container which contains a LinkedList container within it.
 */

#ifndef LSTACK_H
#define LSTACK_H

#include <iostream>
#include "LinkedList.h"
#include <sstream>
#include <string>

	template <typename value_type>
class LStack
{
	public: 
		// ------------------------------------------------------
		// 					Constructors
		// ------------------------------------------------------
		/* 
			Purpose: Create an instance of LStack. 
			Pre-condition: None
			Post-condition: An instance of LStack is created and within it is an instance of LinkedList is also created.
		*/
		LStack();
		
		/* 
			Purpose: Create an instance of LStack. 
			Pre-condition: Valid data is provided to the function. 
			Post-condition: An instance of LStack is created and within it is an instance of LinkedList is also created.
							Within LinkedList, a new node created that stores the data provided to the function. The pointers within 
							linked list (head, current, tail) are set to the node. 
		*/
		LStack(const value_type& data);
		
		// ------------------------------------------------------
		// 					Destructor
		// ------------------------------------------------------
		/* 
			Purpose: To delete the instance of LStack. 
			Pre-condition: An instance of LStack exists.
			Post-condition: The instance of LStack is deleted. The instance of LinkedList and the nodes within it is also deleted. 
		*/
		~LStack(); 
		
		// ------------------------------------------------------
		// 					Member Functions
		// ------------------------------------------------------
				/* 	Notes for the Stack Container (insertion and deletion happens on the same end) 
					- Items are inserted at the head 
					- Items are removed from the head
					- Items are queried from the head			
				*/ 

		/* 
			Purpose: Inserts an object onto the stack
			Pre-condition: An instance of LStack exists and within it is an instance of Linked List. Valid data is provided to the function
			Post-condition: An object is inserted onto the stack. A new node is created in LinkedList and now becomes the head 
							of the list. All other pointers are set accordingly. 
		*/
		void push (const value_type& data); 
		
		/* 
			Purpose: Remove and Return the top object on the stack
			Pre-condition: An instance of LStack exists and within it is an instance of Linked List. The linked list contains nodes. 
			Post-condition: The head node of the linked list is deleted and the data that the node contained is returned. 
							The head pointer in LinkedList is now set to the node after. All other pointers are set accordingly. 
							
		*/
		value_type pop() const; 
		
		/* 
			Purpose: Returns a reference to the object at the top of the stack. 
			Pre-condition: An instance of LStack exists and within it is an instance of Linked List. 
			Post-condition: a reference to the object at the top of the stack is returned 
		*/
		value_type& top() const; 
		
		/* 
			Purpose: Returns a boolean value which lets the user know if the stack is empty or not. 
			Pre-Condition: An instance of LStack exists and within it is an instance of Linked List exists. 
			Post-Condition: A boolean value is returned. This value depends on whether the stack is empty or not. 
		*/ 
		bool isEmpty() const; 
		
		/*
			Purpose: a helper method that will return the data contained within the linkedlist in a string format
			Pre-Condition: An instance of LStack and LinkedList exists.
			Post-Condition: The data (from head to tail) within the LinkedList is returned in a string format.  
		*/
		string print() const; 
		
		// ------------------------------------------------------
		// 					Private Section 
		// ------------------------------------------------------
	private: 
		LinkedList<value_type>* list; 		// A pointer variable that points to a LinkedList 
};

	// ---------------------------------------------------
	//				OVERLOADED OPERATORS
	// ---------------------------------------------------
	template <typename value_type>
	ostream& operator << (ostream& out, LStack<value_type>& stack); 
	
	#include "LStack.template"
#endif