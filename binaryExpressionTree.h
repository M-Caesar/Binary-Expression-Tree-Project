#pragma once
#include "binaryTree.h"
#include "binarySearchTree.h"
#include <stack>
#include <cctype>
#include <string>
using namespace std;

//template <class string>
class binaryExpressionTree: public binaryTreeType<string>
{
public:
	//binaryExpressionTree();
	void buildExpressionTree(string);
	double evaluateExpressionTree();
	double evaluateExpressionTree(nodeType<string>* p);
	bool search(const string&) const { ; };
	void insert(const string&) {};
	void deleteNode(const string&) {};

};

