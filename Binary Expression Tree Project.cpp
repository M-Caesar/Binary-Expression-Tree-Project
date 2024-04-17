// Binary Expression Tree Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "binaryExpressionTree.h"
#include <fstream>


int main()
{
    string postfix;
    binaryExpressionTree expressionTree;
    string file;
    ofstream outputFile("PostfixAns.txt");

    //std::cout << "Hello World!\n";
    //ifstream inFile("postfix.txt");
    //will make this a wile loop for .txt files later
    cout << "Enter the file to read for postfix expressions" << endl;
    //getline(cin,inFile);
    cin >> file;
    ifstream inFile(file);
    while (getline(inFile, postfix))
    {
        expressionTree.buildExpressionTree(postfix);
        double answer = expressionTree.evaluateExpressionTree();
        //cout << "This is the result " << answer << endl;
        outputFile << "This is the result " << answer << endl;
        expressionTree.destroyTree();
    }
    outputFile.close();
}
