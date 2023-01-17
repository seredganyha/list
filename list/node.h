#pragma once
class Node
{
	public:
		Node(int val);
		~Node();
		int getValue();
		Node* getNext();
		void setNext(Node* next);

	private:
		int m_value;
		Node* next;
};