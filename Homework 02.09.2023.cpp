#include <iostream> 
using namespace std;


// Task 1 

/**/
#define Task 1

#if  Task == 1

class Node
{
public:
	int value;
	Node* next1;
	Node* next2;

	Node() {
		value = 0;
		next1 = nullptr;
		next2 = nullptr;
	}
};

int main()
{
	Node* node = new Node(); // First node
	node->next2 = new Node(); // Second node
	node->next2->next1 = new Node(); // Third node
	node->next1 = new Node(); // Fourth node

	// Set values for nodes
	node->value = 1;
	node->next2->value = 2;
	node->next2->next1->value = 3;
	node->next1->value = 4;


	// Give pointers

	// Second node
	node->next2->next1 = node->next1->next2;
	node->next2->next2 = nullptr;

	// Third node
	node->next2->next1->next1 = node->next2;
	node->next2->next1->next2 = nullptr;


	// Four node
	node->next1->next1 = node->next2;
	node->next1->next2 = node->next2->next1;
}



#elif Task == 2


/**/
class Node
{
public:
	int value;
	Node* next1;
	Node* next2;

	Node() {
		value = 0;
		next1 = nullptr;
		next2 = nullptr;
	}
};


int main()
{
	// Create nodes
	Node* node = new Node(); // First node
	node->next1 = new Node(); // Second node
	node->next1->next1 = new Node(); // Third node
	node->next2 = new Node(); // Fourth node


	// Give values for nodes
	node->value = 1;
	node->next1->value = 2;
	node->next1->next1->value = 3;
	node->next2->value = 4;


	// Give pointers

	// Second node
	node->next1->next1 = node->next2->next2;
	node->next1->next2 = node->next2;

	// Third node
	node->next1->next1->next1 = node->next1;
	node->next1->next1->next2 = node;

	// Fourth node
	node->next2->next1 = node->next1;
	node->next2->next2 = node->next1->next1;
}
#endif