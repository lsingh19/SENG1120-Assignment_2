//AlexSort - Main Program
/******************************/
//Author: Alex Mendes
//Course: SENG1120
//Program Description: This program demonstrates the basic functionality of queues and stacks. 

#include <iostream>
#include <cstdlib>
#include <climits>
#include "LQueue.h"
#include "LStack.h"

using namespace std;

int main()
{
	int numStacks = 0;
	int counter;
	int numComparisons = 0; // counter for the number of comparisons (to calculate the complexity of the method)
	LQueue<string> myQueue; // queue of unsorted items
	LStack<string> myStacks[15]; // max of 15 stacks
	
	// populates the queue
	string vectorNumbers[] = {"Alex", "Mary", "Karen", "John", "Fred", "Michelle", "Eve", "Tom", "Brenda", "Steve", "Daniel", "Ysobel", "Tim", "Ben", "Anna"};
	int numValues = sizeof(vectorNumbers)/sizeof(vectorNumbers[0]);
    cout << numValues << endl;

	cout << "This is a demo for AlexSort, which is a made up thing." << endl << endl; 
	
	for (int i=0; i<numValues; i++) {myQueue.enqueue(vectorNumbers[i]);}
	cout << "Original vector : " << myQueue << endl << endl;

	// populates the stacks
	for (int i=0; i<numValues; i++)
	{
		counter = 0;
		while ((!myStacks[counter].isEmpty()) && (myStacks[counter].top() < myQueue.front())) {counter++; numComparisons++;}
		if (myStacks[counter].isEmpty()) {numStacks++;} 
		myStacks[counter].push(myQueue.dequeue()); 
		numComparisons++;
	}

	// prints the stacks
	cout << numStacks << " stacks were required." << endl;
	for (int i=0; i<numStacks; i++)
	{
		cout << "Stack " << i << " : " << myStacks[i] << endl;
	}
	
	// finds the minimum value among the stacks and removes it, iteratively.
    counter = 0;
	for (int j=0; j<numValues; j++)
	{
		string min = "~";
		int minStack = -1;
		for (int i=0; i<numStacks; i++)
		{
			if (!myStacks[i].isEmpty())
			{
				numComparisons++;
				if (myStacks[i].top() < min) {min = myStacks[i].top(); minStack = i;}
			}
		}
		myQueue.enqueue(myStacks[minStack].pop());
	}

	cout << endl << "Array ordered : " << myQueue << endl;
	cout << endl << "Number of comparisons : " << numComparisons << endl;
	cout << "The program has finished." << endl;

	return 0;
}
