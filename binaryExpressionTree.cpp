#include "binaryExpressionTree.h"


void buildExpressionTree(string pfinput)
{
	//This class is a template, so the Type parameter should
	//be specified as a pointer to a nodeType<stromg struct>
	stack<nodeType<string>*> binaryTreeNodes;

	string postfix = pfinput;
	nodeType<string>* newdigitNode = new nodeType<string>;
	nodeType<string>* newopNode = new nodeType<string>;
	nodeType<string>* rootNode = new nodeType<string>;

	//convert the string into an array of chars
	char* expression = new char[postfix.length() + 1];
	char* c = strcpy(expression, postfix.c_str());
	char* c = strtok(expression, postfix.c_str());


	//change to do while loop
	//for (char c : postfix)
	do
	{
		if (isdigit(c[0]))
		{ //how to create new node?
			string(c);
			//store the string onto the info field
			newdigitNode->info = c;
			//push the new node onto the stack
			binaryTreeNodes.push(newdigitNode);
		}
		else
		{
			newopNode->info = c;
			if (!binaryTreeNodes.empty())
			{
				nodeType<string>* ref;
				ref = binaryTreeNodes.top();
				newopNode->rLink = ref;
				binaryTreeNodes.pop();
				if (!binaryTreeNodes.empty())
				{
					//nodeType<string>* refL;
					ref = binaryTreeNodes.top();
					newopNode->lLink = ref;
					binaryTreeNodes.pop();
					binaryTreeNodes.push(newopNode);
				}
				else
					std::cout << "Error - Stack is empty" << endl;
			}
			else 
				std::cout << "Error - Stack is empty" << endl;
			
		}
	} while (c = strtok(NULL, " "));
	if (!binaryTreeNodes.empty())
	{
		rootNode = binaryTreeNodes.top();
		binaryTreeNodes.pop();
		if (!binaryTreeNodes.empty())
		{
			std::cout << "There was an error. Setting root to null" << std::endl;
			rootNode = nullptr;
		}
	}
	//while (token = strcpy(NULL, " "));
}
double evaluateExpressionTree();
//double evaluateExpressionTree(noteType<string>*);
bool search(const string&);
void insert(const string&);
void deleteNode(const string&);
