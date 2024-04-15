#include "binaryExpressionTree.h"


void binaryExpressionTree::buildExpressionTree(string pfinput)
//void buildExpressionTree(string pfinput)
{
	//This class is a template, so the Type parameter should
	//be specified as a pointer to a nodeType<stromg struct>
	stack<nodeType<string>*> binaryTreeNodes;

	string postfix = pfinput;
	//nodeType<string>* newdigitNode = new nodeType<string>;
	//nodeType<string>* newopNode = new nodeType<string>;
	nodeType<string>* rootNode = new nodeType<string>;

	//convert the string into an array of chars
	char* expression = new char[postfix.length() + 1];
	strcpy(expression, postfix.c_str());
	char* c = strtok(expression, " ");


	//change to do while loop
	//for (char c : postfix)
	do
	{
		if (isdigit(c[0]))
		{ //how to create new node?
			nodeType<string>* newdigitNode = new nodeType<string>;
			string(c);
			//store the string onto the info field
			newdigitNode->info = c;
			//push the new node onto the stack
			binaryTreeNodes.push(newdigitNode);
		}
		else
		{
			if (!binaryTreeNodes.empty())
			{
				nodeType<string>* newopNode = new nodeType<string>;
				nodeType<string>* ref;
				newopNode->info = string(c); // check back later
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
	//while (token = strcpy(NULL, " "));
	delete[] expression; //check back later

	if (!binaryTreeNodes.empty())
	{
		nodeType<string>* rootNode = new nodeType<string>;

		rootNode = binaryTreeNodes.top();
		binaryTreeNodes.pop();
		if (!binaryTreeNodes.empty())
		{
			std::cout << "There was an error. Setting root to null" << std::endl;
			rootNode = nullptr;
		}
	}
}
double binaryExpressionTree::evaluateExpressionTree()
{
	nodeType<string>* p = new nodeType<string>;
	if (p->lLink == nullptr && p->rLink == nullptr)
	{
		return stod(p->info);
	}
	else
	{
		string opp = p->info;
		double x = evaluateExpressionTree(p->lLink);
		double y = evaluateExpressionTree(p->rLink);
		if (opp == "+")
		{
			return x + y;
		}
		else if (opp == "-")
		{
			return x - y;
		}
		else if (opp == "*")
		{
			return x * y;
		}
		else if (opp == "/")
		{
			if (y != 0)
			{
				return x / y;
			}
			else
			{
				cerr << "Cant divide by zero" << endl;
				return 0;
			}
		}
		else
		{
			cerr << "Unsupported operator" << endl;
			return 0;
		}
	}
}
double binaryExpressionTree::evaluateExpressionTree(nodeType<string>* p)
{
	//nodeType<string>* p = new nodeType<string>;
	if (p->lLink == nullptr && p->rLink == nullptr)
	{
		return stod(p->info);
	}
	else
	{
		string opp = p->info;
		double x = evaluateExpressionTree(p->lLink);
		double y = evaluateExpressionTree(p->rLink);
		if (opp == "+")
		{
			return x + y;
		}
		else if (opp == "-")
		{
			return x - y;
		}
		else if (opp == "*")
		{
			return x * y;
		}
		else if (opp == "/")
		{
			if (y != 0)
			{
				return x / y;
			}
			else
			{
				cerr << "Cant divide by zero" << endl;
				return 0;
			}
		}
		else
		{
			cerr << "Unsupported operator" << endl;
			return 0;
		}
	}
}
//bool binaryExpressionTree::search(const string& s) const { ; }
//void binaryExpressionTree::insert(const string&) {};
//void binaryExpressionTree::deleteNode(const string&) {};
