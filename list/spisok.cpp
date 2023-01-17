#include "spisok.h"
#include <iostream>

Spisok::Spisok() {
	this->head = nullptr;
	this->tail = nullptr;
};

Spisok::~Spisok() {
	removeAllNode();
};

void Spisok::FrontAdd(int value) {
	Node* appendNode = new Node(value);

	if (isEmpty()) {
		this->head = appendNode;
		this->tail = appendNode;
	} 
	else {
		appendNode->setNext(this->head);
		this->head = appendNode;
	}
}

void Spisok::BackAdd(int value) {
	Node* appendNode = new Node(value);

	if (isEmpty()) {
		this->head = appendNode;
		this->tail = appendNode;
	}
	else {
		this->tail->setNext(appendNode);
		this->tail = appendNode;
	}
}

void Spisok::BackAdd(Node* appendNode) {
	if (isEmpty()) {
		this->head = appendNode;
		this->tail = appendNode;
	}
	else {
		this->tail->setNext(appendNode);
		this->tail = appendNode;
	}
}

bool Spisok::isEmpty() {
	return this->head == nullptr;
}

void Spisok::printAll() {
	if(isEmpty()) std::cout << "List is Empty";

	Node* currentNode = this->head;
	while (currentNode)
	{
		std::cout << currentNode->getValue();
		currentNode = currentNode->getNext();
	}
}

void Spisok::removeHeadNode() {
	if (isEmpty()) return;

	Node* currentNode = this->head;
	this->head = currentNode->getNext();
	
	delete currentNode;
}

void Spisok::removeBackNode() {
	if (isEmpty()) return;

	if (head == tail) {
		removeHeadNode();
	}

	Node* currentNode = this->head;
	while (currentNode->getNext() != this->tail) {
		currentNode = currentNode->getNext();
	}
	currentNode->setNext(nullptr);
	delete this->tail;

	this->tail = currentNode;
}

int Spisok::getLength() {
	Node* currentNode = this->head;
	int length = 0;

	while (currentNode) {
		length++;
		currentNode = currentNode->getNext();
	}

	return length;
}

void Spisok::removeAllNode() {
	Node* nextHeadNode = head->getNext();
	while (nextHeadNode) {
		delete head;
		head = nextHeadNode;
		nextHeadNode = head->getNext();
	}

	head = nullptr;
	tail = nullptr;

}

Node* Spisok::getHead() {
	return this->head;
}

Node* Spisok::getTail() {
	return this->tail;
}

void Spisok::InsertListInCenter(Spisok* spisok) {
	if (isEmpty() || spisok->isEmpty()) return;

	int halfLength = getLength() / 2;

	Node* plaseToInsert = this->getHead();
	
	for (int i = 0; i < halfLength - 1; i++) {
		plaseToInsert = plaseToInsert->getNext();
	}

	Node* currentNodeInsert = spisok->getHead();

	spisok->BackAdd(plaseToInsert->getNext());
	plaseToInsert->setNext(spisok->getHead());
}
