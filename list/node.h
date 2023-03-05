#pragma once
class Node
{
	public:
		Node(int val);
		~Node();
		int getValue();
		Node* getNext();
		Node* getPrevious();
		void setPrevious(Node* previous);
		void setNext(Node* next);

	private:
		int m_value;
		Node* next;
		Node* previous;
};