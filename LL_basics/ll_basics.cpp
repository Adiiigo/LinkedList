/*
 * ll_basics.cpp
 *
 *  Created on: 25-Sep-2019
 *      Author: AditiGoyal
 */
#include<bits/stdc++.h>
using namespace std;

struct Node{
	struct Node *prev;
	int value;
	struct Node *next;
};

struct Node* createNode(int data)
{
	struct Node *node = NULL ;

	node = (struct Node*)calloc(1, sizeof(struct Node));

	node->value = data ;
	node->prev = NULL ;
	node->next = NULL ;

	return node;
}

int main()
{
	//Creating the head value which will be able to store the address of the
	//first node in the linked list
	struct Node *head = NULL ;
//	struct Node *last = NULL ;

	//Initializing the memory for the node and assigning it to the head variable
	head = (struct Node*)calloc(1 , sizeof(struct Node)) ;
	cout << "(Head) has been allocated space\n" ;

	//Initializing the node ithe values
	head = createNode(1) ;

	cout << "(*head).value = " << (*head).value << "\n" ;
	cout << "head->value = " << head->value << "\n" ;
	cout << "head =" << head << "\n" ;
	cout << "&head = " << &head << "\n" ;
	cout << "head->prev = " << head->prev << "\n" ;
	cout << "head->next = " << head->next << "\n";

	return 0 ;
}
/*
{Output}
(Head) has been allocated space
(*head).value = 1
head->value = 1
head =0x696e48
&head = 0x62ff1c
head->prev = 0
head->next = 0
*/
