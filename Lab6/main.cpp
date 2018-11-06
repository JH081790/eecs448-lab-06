/**
*	@author 
*	@date 
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "Test.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	LinkedListOfInts testableList;
	std::cout << "Running Tests: \n==========================================================================\n";
	Test tester;
	tester.runTests();

	//TestSuite myTester;
	//myTester.runTests();

	std::cout << "==========================================================================\nTests Complete\n";
	
	return (0);

}

