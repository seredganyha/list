#include "node.h"

Node::Node(int val) {
	this->m_value = val;
	this->setNext(nullptr);
	this->setPrevious(nullptr);
};

Node::~Node() {};

int Node::getValue() {
	return this->m_value;
}

Node* Node::getNext() {
	return this->next;
}

void Node::setNext(Node* next) {
	this->next = next;
}

Node* Node::getPrevious() {
	return this->previous;
}

void Node::setPrevious(Node* previous) {
	this->previous = previous;
}