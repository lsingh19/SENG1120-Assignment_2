/*
 * File Name: LinkedList.h
 * Course: SENG1120
 * Assessment Title: Assignment 2
 * Last Modified: 10/05/2019
 * Notes: This file is a modified version of the Node file from assignment 1, the modified version utilises templates instead of typedef (program becomes more generic)
 */

// Macroguard for LinkedList
 #ifndef L_LINKEDLIST
 #define L_LINKEDLIST
 
 #include "Node.h"
 #include <cstdlib> 
 #include <iostream> 
 #include <sstream>
 #include <string>
 
 using namespace std; 
 
 // Declaring that the class with use a 'template' instead of a 'typedef'. 
 template <typename value_type>
 class LinkedList
 {
	public:
	
	
	// ---------------------------------------------------------------
	//						Constructors
	// ---------------------------------------------------------------
	/* 
		Purpose: Create an instance of LinkedList. 
		Pre-condition: None
		Post-condition: An instance of linked list is created which will contain a head, tail and current pointer which will
		be set to NULL upon initilisation of the linked list.
	*/
	LinkedList();
	
	/* 
		Purpose: Creates an instance of LinkedList with a paramater for Data that will be placed within a newly created Node within the LinkedList. 
		Pre-condition: Valid data is provided to the function
		Post-condition: An instance of linked list is created with the data provided, which will be stored within a newly created node within the LinkedList.
		The head, tail and current pointer will be set according to the the number of nodes within the linked list, if any.
	*/
	LinkedList(const value_type& data);
	
	
	// ---------------------------------------------------------------
	//						Destructor
	// ---------------------------------------------------------------
	/* 
		Purpose: To delete the LinkedList and any Nodes within it. 
		Pre-condition: An instance of Linked List exists.
		Post-condition: the instance of linked list is deleted with it all the nodes, pointers and data that are contained within it. 
	*/
	~LinkedList();
	
	// ---------------------------------------------------------------
	//						Member Functions
	// ---------------------------------------------------------------
	
	/* 
		Purpose: Creates a Node object within the Linked List and the input paramater (data) is stored with the newly created Node. 
		Pre-condition: Valid data is provided and the Linked List is initialised
		Post-condition: there are 2 possibilites to using this method: 
		1.	Creates a Node object and sets 'tail' pointer to the new Node. The 'previous' pointer 
			within node will be set to the node before the new node within the linked list. The node before the new node
			will have it's 'next' pointer will set to the new node.  
		  
		  OR
		  
		2.	If the 'head' pointer is set to the NULL, meaning that there does not exist any nodes within the linkedlist.
			In that case a node object will be created in which its 'next' and 'previous' pointers will be set to NULL.
			the 'head', 'tail' and 'current' within the Linkedlist will all be set to newly created node.
	*/
	void addToTail(const value_type& data); 
	
	
	/* 
		Purpose: Checking whether if the Current Pointer is set to NULL.
		Pre-condition: None
		Post-condition: a boolean value is returned when this method is called. The boolean value depends on whether the Current pointer is NULL or not. 
	*/
	bool check_current() const; 
	
	
	/* 
		Purpose: Moves the current pointer to the front of the LinkedList aka the head Node.
		Pre-condition: None
		Post-condition: The current pointer within linked list will be moved to the head of the linked list. 
	*/
	void move_To_Head(); 

	
	/* 
		Purpose: Moves the current pointer down the LinkedList, by assigning the node after the current node to the pointer. 
		Pre-condition: none 
		Post-condition: The currrent pointer will now point to the next node in the linked list or it will
						point to null if it reaches the end of the linked list. 
	*/
	void forward();
	
	
	/* 
		Purpose: Retrieves the data stored within the Node that the current pointer is pointing too. 
		Pre-condition: The current pointer is not set to NULL and the LinkedList exists. 
		Post-condition: the data stored within node that the current pointer is pointing too is returned. 
	*/
	value_type get_current_data() const; 
	
	
	/*
		Purpose: returns a reference to the data stored within the first node of the linked list. 
		Pre-Condition: The linked list is initialised and contains a node within it which the head pointer is pointing too. 
		Post-Condtion: The data stored within the head node of the linked list is returned to the user. 
	*/
	value_type& get_head_data() const; 
	
	
	/*
		Purpose: removes the head node within the linked list and the data contained within this node is returned. 
		Pre-Condition: The linked list is initialised and the head pointer is pointing to a node within the linked list. 
					   The LinkedList contains at least one node within it.
		Post-Condtion: The first node of the linked list is removed and its data is returned to the user. The head pointer 
						is now set to next node within the linkedlist. 
	*/
	value_type remove_head();
	
	/*
		Purpose: A new node is created within the linked list using the provided added and the head pointer 
				 is set to the newly created to the Node. 
		Pre-Condition: Valid data is provided and the linked list is initialised. 
		Post-Condtion: A new node is created within the linked list and becomes the head of the linked list. 
					   All pointers ( 'next' and 'previous') within nodes in the linked list are set accordingly. 
	*/
	void addToHead(const value_type& data); 
	
	/*
		Purpose: Returns the number of items/nodes within the linked list. 
		Pre-Condition: Linked list is initialised.  
		Post-Condtion: The value of the list_length (a variable that stores the amount of nodes within the linked list) is returned. 
	*/
	int size() const; 
	
	/* 
		Purpose: Outputs the items in the linkedlist (outputs the data from head to tail) in a string format.
		Pre-Condition: An instance of LinkedList is initialised. 
		Post-Condition: The data contained within the LinkedList is returned in a string format. 
	*/ 
	string list_data(); 
	
	
	// ---------------------------------------------------------------
	//						Private Variables
	// ---------------------------------------------------------------
	private: 
		// Declaring private variables. 
		Node<value_type>* head;			// head pointer
		Node<value_type>* tail;			// tail pointer 
		Node<value_type>* current; 		// current pointer
		int list_length;				// stores the numebr of nodes within the linked list. 
 };
 
 
	// ---------------------------------------------------------------
	//					Overloaded Operator
	// ---------------------------------------------------------------
	template <typename value_type>
	ostream& operator << (ostream& out, LinkedList<value_type>& list); 
	
#include "LinkedList.template"
 #endif