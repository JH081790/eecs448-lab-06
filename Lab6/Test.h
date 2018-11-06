#ifndef LINKED_LIST_OF_INTS_TESTER_H
#define LINKED_LIST_OF_INTS_TESTER_H

#include "LinkedListOfInts.h"

class Test
{   
    public: 

    Test();

    //This will call all your test methods
    void runTests();
     
    private:

    /**
    * @brief Creates an empty list and verifies isEmpty() returns true
    **/
    void test01();
    /**
    * @brief Creates an empty list adds 1 value, verifies isEmpty() returns false
    **/
    void test02();

    /**
    * @brief Creates an empty list and verifies getLength() returns 0
    **/
    void test03();

    /**
    * @brief Creates an empty list and inserts at front of list then verifies getLength() returns 1
    **/
    void test04();

    /**
    * @brief Creates an empty list and inserts at back of list then verifies getLength() returns 1
    **/
    void test05();

    /**
    * @brief Creates an empty list and inserts at middle of list then verifies getLength() returns 1
    **/
    void test06();

    /**
    * @brief Creates an empty list and inserts at front of list then removes from front of list then verifies getLength() returns 0
    **/
    void test07();

    /**
    * @brief Creates an empty list and inserts at back of list then removes from front of list then verifies getLength() returns 0
    **/
    void test08();

    /**
    * @brief Creates an empty list and inserts at front of list then removes from middle of list then verifies getLength() returns 0
    **/
    void test09();

    /**
    * @brief Creates an empty list and and returns correct value after adding a node then replacing it at front of list
    **/
    void test10();

    /**
    * @brief Creates an empty list and and returns correct value after adding a node then replacing it at back of list
    **/
    void test11();

    /**
    * @brief Creates an empty list and and returns correct value after adding a node then replacing it at middle of list
    **/
    void test12();

    /**
    * @brief creates a list, inserts a node then replaces it and checks to make sure the value is correct
    **/
    void test13();
};

#endif