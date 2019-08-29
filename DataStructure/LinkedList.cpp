#include "LinkedList.h"

namespace insoLLLent::DataStructure {

/* Node */

Node::Node() : value(0), next(nullptr) {}
Node::Node(const Node& node) : value(node.value), next(node.next) {}
Node::Node(int v) : value(v), next(nullptr) {}
Node::Node(int v, Node* n) : value(v), next(n) {}

/* LinkedList */

LinkedList::LinkedList() : m_first(), m_current(&m_first) {}

LinkedList::LinkedList(const Node& first) :
	m_first(first), m_current(&m_first) {}

LinkedList::LinkedList(int first) : m_first(), m_current(&m_first) {
	m_first.value = first;
}

const Node& LinkedList::GetCurrent() const {
	return *m_current;
}

bool LinkedList::IsLast() const {
	return m_current->next == nullptr;
}

void LinkedList::Next() {
	if (IsLast()) return;
	m_current = m_current->next;
}

void LinkedList::Reset() {
	m_current = &m_first;
}

void LinkedList::Insert(Node* newNode) {
	if (newNode == nullptr) return;

	newNode->next = m_current->next;
	m_current->next = newNode;
}

void LinkedList::RemoveNext() {
	if (IsLast()) return;

	Node* tmp = m_current->next;
	m_current->next = tmp->next;
	tmp->next = nullptr;
}


} // namespace insoLLLent::DataStructure
