/*
 * File Name: Node.h
 * Course: SENG1120
 * Assessment Title: Assignment 2
 * Last Modified: 10/05/2019
 * Notes: This file is a modified version of the Node file from assignment 1, the modified version utilises templates instead of typedef (program becomes more generic)
 */

 // Macroguard for Node class
#ifndef L_Node
#define L_Node

#include <cstdlib>
using namespace std; 

// declaring template 
template <typename value_type>
	class Node 
	{
		public: 
		
			// --------------------------------------------------------------------- // 
			// 							Constructors 
			// --------------------------------------------------------------------- // 
				
				/*
					Purpose: Creates an instance of Node with no parameters. 
					Pre-Condition: None
					Post-Condition: An instance of node is initialised with it's pointers set to the NULL 
									and the data is created using the constructor from value_type. 
				*/
			Node(); 
			
			
				/*
					Purpose: Creates an instance of Node with 1 parameter that being the data for the Node that will be created
					Pre-Condition: The data provided to the function/method is valid
					Post-Condition: An instance of Node is created with the data that's set as the input parameter for the function. Both pointers in Node are set to NULL.
				*/
			Node(const value_type& init_data);
			
			
			// ----------------------------------------- NOTE -------------------------------------------- //
			// Note: if we set the input paramater to a constant then an error occurs where the program has
			// problems assigning a 'const Node*' variable to a 'Node*' variable.
			// ------------------------------------------------------------------------------------------- // 
			
				/*
					Purpose: Creates an instance of Node with 3 parameter. 
					Pre-Condition: the data provided is valid, both the parameter for the Node pointer are also valid.
					Post-Condition: an instance of Node is created with the data thats set as the input parameter for the data in Node. The next pointer is set to the input 
					paramter for the next pointer and the previous pointer is set to the input parameter for the previous pointer. 
				*/
			Node(const value_type& init_data, Node<value_type>* nPrevious, Node<value_type>* nNext);
			
			
			// --------------------------------------------------------------------- // 
			// 								Destructor 
			// --------------------------------------------------------------------- //
				/* 
					Purpose : To delete the Node and with it the data and pointers within it. 
					Pre-condition: A node exists for the method/function to destroy/delete. 
					Post-condition: The data within the node and both pointers (next and previous) are deleted aswell as the node itself.
				*/
			~Node();
			
			
			// --------------------------------------------------------------------- // 
			// 							Methods/Functions 
			// --------------------------------------------------------------------- // 
						
				/*
					Purpose: To set the data within the Node using the input paramater for the data. 
					Pre-Condition: The node exists and the data/paramater provided by the user is a valid paramater.
					Post-Condition: The 'data' provided in the method is set to the 'data' for the node. 
				*/
			void set_data(const value_type& new_data);
			
			
			/*
				Purpose: Sets the 'next' pointer of the node to the input paramater.  
				Pre-Condition: The node exists within the linked list and a valid paramter is provided. 
				Post-Condition: The 'next' pointer within the node is set to the input parameter. 
			*/
			void set_next(Node<value_type>* next_link);
			
			/*
				Purpose: Sets the 'previous' pointer of the node to input parameter.
				Pre-Condition: The node exists within the linked list and a valid paramter is provided.  
				Post-Condition: The 'previous' pointer within the node will be set to the input parameter.
			*/
			void set_previous(Node<value_type>* previous_link);
			
			
			/*
				Purpose: Reterives the data stored within the node and value_type returned is a const value_type
				Pre-Condition: Data exists within the node and the node itself exists. 
				Post-Condition: The data stored within the node is returned to the user when this function is called. This 
				doesn't remove/delete the data stored within the Node.
			*/
			value_type get_data() const;
			
			/*
				Purpose: Reterives a reference to the data stored within the node.
				Pre-Condition: Data exists within the node and the node itself exists. 
				Post-Condition: a reference to the data stored within the node is returned to the user when this function is called. This 
				doesn't remove/delete the data stored within the Node.
			*/
			value_type& get_data(); 
			
			/*
				Purpose: Retierves the Node that the 'previous' Pointer is pointing too. 
				Pre-Condition: The Node exists
				Post-Condition: Whatever the 'previous' pointer is pointing too is returned. Can either be a Node or NULL, depending on the position of the
								Node within the Linked List. 
			*/
			Node<value_type>* get_previous() const;
			
			
			/*
				Purpose: Retierves the Node that the 'next' Pointer is pointing too. 
				Pre-Condition: The Node exists
				Post-Condition: Whatever the 'next' pointer is pointing too is returned. Can either be a Node or NULL, depending on the position of the
								Node within the Linked List. 
			*/
			Node<value_type>* get_next() const; 
			
			
			// --------------------------------------------------------------------- // 
			// 							Private Variables  
			// --------------------------------------------------------------------- //  
		private: 
			value_type data; 						// A variable to store the data
			Node<value_type>* next; 				// A varaible to store the memory address of the 'next' Node
			Node<value_type>* previous; 			// A variable to store the memory address of the 'previous' Node
	};
		#include "Node.template"
#endif 