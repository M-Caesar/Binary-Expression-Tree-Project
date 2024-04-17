#pragma once
#include "binaryTree.h"
//#include "binarySearchTree.h" not needed
#include <stack>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;

//template <class string>
class binaryExpressionTree: public binaryTreeType<string>
{
public:
	//binaryExpressionTree();
	/*Precondition: Tree class has been defined for inheritance for this class. 
	This holds true for all following member functions 
	Postcondition: Expression Tree is built */
	void buildExpressionTree(string);
	//Precondition: Expression Tree has been created and postfix expression has been provided to it
	//Postcondition: The evaluation of the postfix expression is printed
	double evaluateExpressionTree();
	//Precondition: Expression Tree has been created and postfix expression has been provided to it
	//Postcondition: The evaluation of the postfix expression is printed
	double evaluateExpressionTree(nodeType<string>* p);
	//Precondition: A binary tree has been made
	//Postcondition: A answer on if the item has been found is returned
	bool search(const string& s) const { return 0; };
	//Precondition: A binary tree has been made
	//Postcondition: The item has been insert into the tree and the tree has been rebalanced
	void insert(const string& i) {};
	//Precondition: A binary tree has been made
	//Postcondition: The item has been deleted from the tree and the tree has been rebalanced
	void deleteNode(const string& d) {};

};

