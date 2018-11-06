#include "Test.h"
#include <string>
#include <iostream>

Test::Test(){
    //ctor
}

void Test::runTests(){
    test01();
    test02();
    test03();
    test04();
    test05();
    test06();
    test07();
    test08();
    test09();
    test10();
    test11();
    test12();
    test13();
}

void Test::test01(){
    LinkedListOfInts *testList = new LinkedListOfInts();
    std::cout << "Test #1: size is 0 after new list is created: " << ((testList->size() == 0) ? "PASSED\n" : "FAILED\n");
    delete testList;
}
void Test::test02(){
    LinkedListOfInts *testList = new LinkedListOfInts();
    std::cout << "Test #2: isEmpty returns true after new list is created: " << (testList->isEmpty() ? "PASSED\n" : "FAILED\n");
    delete testList;
}
void Test::test03(){
    LinkedListOfInts *testList = new LinkedListOfInts();
    testList->addBack(3);
    std::cout << "Test #3: size returns correct value after node is added to the back: " << ((testList->size() == 1) ? "PASSED\n" : "FAILED\n");
    delete testList;
}
void Test::test04(){
    LinkedListOfInts *testList = new LinkedListOfInts();
    testList->addFront(3);
    std::cout << "Test #4: size returns correct value after node is added to the front: " << ((testList->size() == 1) ? "PASSED\n" : "FAILED\n");
    delete testList;
}
void Test::test05(){
    LinkedListOfInts *testList = new LinkedListOfInts();
    testList->addBack(3);
    std::cout << "Test #5: search returns true after a node is added to the back: " << (testList->search(3) ? "PASSED\n" : "FAILED\n");
    delete testList;
}
void Test::test06(){
    LinkedListOfInts *testList = new LinkedListOfInts();
    testList->addFront(3);
    std::cout << "Test #6: search returns true after a node is added to the front: " << (testList->search(3) ? "PASSED\n" : "FAILED\n");
    delete testList;
}
void Test::test07(){
    LinkedListOfInts *testList = new LinkedListOfInts();
    std::cout << "Test #7: search returns false when list is empty: " << (!testList->search(4) ? "PASSED\n" : "FAILED\n");
    delete testList;
}
void Test::test08(){
    LinkedListOfInts *testList = new LinkedListOfInts();
    for(int i = 1; i <= 3; i++){
        testList->addBack(i);
    }
    int testLength = testList->size();
    std::cout << "Test #8: size returns correct value after adding and removing from front of list: " << ((testList->size() == testLength - 1) ? "PASSED\n" : "FAILED\n");
    delete testList;
}
void Test::test09(){
    LinkedListOfInts *testList = new LinkedListOfInts();
    for(int i = 1; i <= 3; i++){
        testList->addBack(i);
    }
    int testLength = testList->size();
    std::cout << "Test #9: size returns correct value after adding and removing from front of list: " << ((testList->size() == testLength - 1) ? "PASSED\n" : "FAILED\n");
    delete testList;
}
void Test::test10(){
    LinkedListOfInts *testList = new LinkedListOfInts();
    for(int i = 1; i <= 3; i++){
        testList->addFront(i);
    }
    testList->addFront(13);
    std::cout << "Test #10: addFront adds to the front of the list: " << ((testList->toVector().at(0) == 13) ? "PASSED\n" : "FAILED\n");
    delete testList;
}
void Test::test11(){
    LinkedListOfInts *testList = new LinkedListOfInts();
    for(int i = 1; i <= 3; i++){
        testList->addBack(i);
    }
    testList->addBack(13);
    int length = testList->size();
    std::cout << "Test #11: addBack adds to the back of the list: " << ((testList->toVector().at(length - 1) == 13) ? "PASSED\n" : "FAILED\n");
    delete testList;
}
void Test::test12(){
    LinkedListOfInts *testList = new LinkedListOfInts();
    for(int i = 1; i <= 3; i++){
        testList->addBack(i);
    }
    std::cout << "Test #12: isEmpty returns false when list size > 0: " << ((!testList->isEmpty()) ? "PASSED\n" : "FAILED\n");
    delete testList;
}
void Test::test13(){
    LinkedListOfInts *testList = new LinkedListOfInts();
    std::cout << "Test #13: search returns false when node can't be found: " << (!testList->search(4) ? "PASSED\n" : "FAILED\n");
    delete testList;
}
