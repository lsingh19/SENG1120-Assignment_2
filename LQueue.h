/*
 * File Name: LQueue.h
 * Course: SENG1120
 * Assessment Title: Assignment 2
 * Last Modified: 10/05/2019
 * Notes: This is a Queue container which contains a LinkedList container within it.
 */

#ifndef LQUEUE_H
#define LQUEUE_H

#include <iostream>
#include "LinkedList.h"

// declaring template
template <typename value_type>

class LQueue
{
	public: 
		// ---------------------------------------------------
		//					Constructors
		// ---------------------------------------------------
		/* 
			Purpose: Create an instance of LQueue. 
			Pre-condition: None
			Post-condition: an instance of LQueue is initialised and within it an instance LinkedList is initialised
		*/
		LQueue(); 
		
		/*
			Purpose: Create an instance of LQueue is initialised using the data provided
			Pre-condition: Valid data is provided to the function. 
			Post-Condition: an instance of LQueue is initialised and within it an instance of LinkedList is 
							initialised using the data provided to the function. 
		*/
		LQueue(const value_type& data);
		
		// ---------------------------------------------------
		//					Destructor
		// ---------------------------------------------------
		/* 
			Purpose: Deletes the instance of LQueue with the LinkedList and Nodes within it. 
			Pre-Condition: An instance of LQueue exists. 
			Post-Condition: The instance of LQueue is deleted.  
		*/
		~LQueue(); 
		
		// ---------------------------------------------------
		//					MEMBER FUNCTIONS
		// ---------------------------------------------------
				/* 	Notes for the Queue Container (First in, First out) 
					- Items are inserted at the tail 
					- Items are removed from the head
					- Items are queried from the head			
				*/ 
		
		/* 
			Purpose: To add an object to the queue. 
			Pre-Condition: Valid data is provided to the function. An instance of LQueue exists and within it is 
						   an instance of LinkedList. 
			Post-Condition: An object is added to the queue. A new node is created within the linked list 
							and is now set as the tail of the list. 
		*/ 
		void enqueue (const value_type& data); 
		
		/*
			Purpose: Remove and return the object at the front of the queue. 
			Pre-Condition: An instance of LQueue exists and within it is an instance of linkedlist which contains a node within it.
			Post-Condition: The first node within the linked list is deleted and the data that the node contained 
							is returned. The head pointer is set to the 2nd Node in the linked list (if there is one)
		*/
		value_type dequeue() const; 
		
		/*
			Purpose: Return a reference to the object at the front of the queue
			Pre-Condition: An instance of LQueue and LinkedList exists. The linked list contains a node within it. 
			Post-Condition: a reference to the object at the front of the queue is returned. 
		*/
		value_type& front() const;  
		
		/*
			Purpose: a helper method that will return the data contained within the linkedlist in a string format
			Pre-Condition: An instance of LQueue and LinkedList exists.
			Post-Condition: The data (from head to tail) within the LinkedList is returned in a string format.  
		*/
		string print() const;  
		
		
		// ---------------------------------------------------
		//					PRIVATE SECTION
		// ---------------------------------------------------
	private: 
		LinkedList<value_type>* list; 				// A pointer variable that points to a LinkedList
};

		// ---------------------------------------------------
		//				OVERLOADED OPERATORS
		// ---------------------------------------------------
	template <typename value_type>
	ostream& operator << (ostream& out, LQueue<value_type>& queue);
 
	#include "LQueue.template"
#endif