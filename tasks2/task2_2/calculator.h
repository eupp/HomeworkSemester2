#pragma once

#include <iostream>
#include <string>
#include "stackByHeap.h"
#include "stackByArray.h"
#include <math.h>
using std::string;


class Calculator
{
public:
    Calculator();
    ~Calculator();
    double calc(string expression) throw(int);
    void test();
private:
    AbstractStack<char>* stack;
    string polishExpr;
    static const int tableSize = 4;
    static const char priorityTable[tableSize];
    void parse(string expression) throw(int);
    double calc(string::iterator &itr) throw(int);
    static bool permitted(char ch);
    static bool isNumber(char ch);
    static bool isOperator(char ch);
    static int getPriority(char ch);
};