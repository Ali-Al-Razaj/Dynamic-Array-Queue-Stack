// Custom Stack Using Dynamic Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsMyStackArr.h";
using namespace std;

int main()
{
    clsMyStackArr<int> Stack;

    Stack.Push(1);
    Stack.Push(2);
    Stack.Push(3);
    Stack.Push(4);
    Stack.Push(5);

    Stack.Pop();
    Stack.Pop();

    Stack.Print();



}

