#pragma once
#include "binaryTree.h"
//#include "binarySearchTree.h"
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
	void buildExpressionTree(string);
	double evaluateExpressionTree();
	double evaluateExpressionTree(nodeType<string>* p);
	bool search(const string& s) const { return 0; };
	void insert(const string& i) {};
	void deleteNode(const string& d) {};

};

