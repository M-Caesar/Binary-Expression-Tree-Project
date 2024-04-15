// Binary Expression Tree Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "binaryExpressionTree.h"
#include <fstream>


int main()
{
    string postfix;
    binaryExpressionTree expressionTree;

    //std::cout << "Hello World!\n";
    //ifstream inFile("postfix.txt");
    getline(cin,postfix);
    expressionTree.buildExpressionTree(postfix);
    double answer = expressionTree.evaluateExpressionTree();
    cout << "This is the result" << answer << endl;

}
