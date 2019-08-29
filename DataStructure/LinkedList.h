#pragma once

namespace insoLLLent::DataStructure {

/**
	\brief ���� �������� ������
*/
struct Node final {
	int value;
	Node* next;

	Node();
	explicit Node(const Node& node);
	explicit Node(int v);
	Node(int v, Node* n);
};

/**
	\brief ������� ������
*/
class LinkedList final {
private:
	Node m_first;
	Node* m_current;

public:
	LinkedList();
	explicit LinkedList(const Node& first);
	explicit LinkedList(int first);

	/// �������� ������� ����
	const Node& GetCurrent() const;
	/// �������� �� ������� ���� ��������� � ������
	bool IsLast() const;
	/// ������� � ���������� ��������
	void Next();
	/// ��������� � ������ ������
	void Reset();
	/// �������� ����� ����
	void Insert(Node* newNode);
	/// ������� ��������� ����
	void RemoveNext();
};

} // namespace insoLLLent::DataStructure
