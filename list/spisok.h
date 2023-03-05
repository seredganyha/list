#pragma once
#include "node.h"

class Spisok
{
public:
	Spisok();
	~Spisok();
	void FrontAdd(int value);
	void BackAdd(int value);
	void BackAdd(Node* node);
	bool isEmpty();
	void printAll();
	void removeHeadNode();
	void removeAllNode();
	void removeBackNode();
	int getLength();
	void InsertListInCenter(Spisok* spisok);
	void minNodeToHead();
	Node* getHead();
	Node* getTail();

private:
	Node* head;
	Node* tail;

};

