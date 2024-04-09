#include "binaryExpressionTree.h"


void buildExpressionTree(string pfinput)
{
	//This class is a template, so the Type parameter should
	//be specified as a pointer to a nodeType<stromg struct>
	stack<string> binaryTreeNodes;

	string postfix = pfinput;

	//convert the string into an array of chars
	char* expression = new char[postfix.length() + 1];
	strcpy(expression, postfix.c_str());
	for (char c : postfix)
	{
		if (isdigit(c))
		{
			node = new node<string>; //how to create new node?
		}
	}
}
double evaluateExpressionTree();
double evaluateExpressionTree(noteType<string>*);
bool search(const string&);
void insert(const string&);
void deleteNode(const string&);
