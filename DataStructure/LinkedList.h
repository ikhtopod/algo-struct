#pragma once

namespace insoLLLent::DataStructure {

/**
	\brief Узел связного списка
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
	\brief Связный список
*/
class LinkedList final {
private:
	Node m_first;
	Node* m_current;

public:
	LinkedList();
	explicit LinkedList(const Node& first);
	explicit LinkedList(int first);

	/// Получить текущий узел
	const Node& GetCurrent() const;
	/// Является ли текущий узел последним в списке
	bool IsLast() const;
	/// Перейти к следующему элементу
	void Next();
	/// Вернуться в начало списка
	void Reset();
	/// Вставить новый узел
	void Insert(Node* newNode);
	/// Удалить следующий узел
	void RemoveNext();
};

} // namespace insoLLLent::DataStructure
