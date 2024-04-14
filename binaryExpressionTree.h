#pragma once
#include "binaryTree.h"
#include "binarySearchTree.h"
#include <stack>
#include <cctype>
#include <string>

template <class elemType>
class binaryExpressionTree: public binaryTreeType<elemType>
{
	binaryExpressionTree();
	void buildExpressionTree(string);
	double evaluateExpressionTree();
	double evaluateExpressionTree(noteType<string>*);
	bool search(const string&);
	void insert(const string&);
	void deleteNode(const string&);
};

