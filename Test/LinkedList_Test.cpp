#include "stdafx.h"

#include "LinkedList.h"

using insoLLLent::DataStructure::Node;
using insoLLLent::DataStructure::LinkedList;

TEST(DataStructure_Node, DefaultConstructor) {
	Node node {};

	EXPECT_EQ(node.value, 0);
	EXPECT_EQ(node.next, nullptr);
}

TEST(DataStructure_Node, Value128_NextIs_Nullptr) {
	Node node { 128 };

	EXPECT_EQ(node.value, 128);
	EXPECT_EQ(node.next, nullptr);
}

TEST(DataStructure_Node, Value128_NextIs_Node256) {
	Node node_256 { 256 };
	Node node_128 { 128, &node_256 };

	EXPECT_EQ(node_128.value, 128);
	EXPECT_NE(node_128.next, nullptr);

	EXPECT_EQ(node_128.next, &node_256);

	EXPECT_EQ(node_128.next->value, 256);
	EXPECT_NE(node_128.next->value, 128);

	EXPECT_EQ(node_128.next->next, nullptr);
	EXPECT_NE(node_128.next->next, &node_128);
	EXPECT_NE(node_128.next->next, &node_256);
}

TEST(DataStructure_Node, Value128_ChangeTo256) {
	Node node { 128 };
	node.value = 256;

	EXPECT_EQ(node.value, 256);
}

TEST(DataStructure_Node, Next_ChangeTo_NewNode) {
	Node node_128 { 128 };
	Node node_256 { 256 };

	EXPECT_EQ(node_128.value, 128);
	EXPECT_EQ(node_128.next, nullptr);

	EXPECT_EQ(node_256.value, 256);
	EXPECT_EQ(node_256.next, nullptr);

	node_128.next = &node_256;

	EXPECT_EQ(node_128.value, 128);
	EXPECT_EQ(node_128.next, &node_256);

	EXPECT_EQ(node_128.next->value, 256);
	EXPECT_EQ(node_128.next->next, nullptr);

	EXPECT_EQ(node_128.next->value, node_256.value);
	EXPECT_EQ(node_128.next->next, node_256.next);

	EXPECT_EQ(node_256.value, 256);
	EXPECT_EQ(node_256.next, nullptr);
}

TEST(DataStructure_LinkedList, DefaultConstructor) {
	LinkedList ll {};

	EXPECT_EQ(ll.GetCurrent().value, 0);
	EXPECT_EQ(ll.GetCurrent().next, nullptr);
}

TEST(DataStructure_LinkedList, ConstructorNode) {
	LinkedList ll { Node { 128 } };

	EXPECT_EQ(ll.GetCurrent().value, 128);
	EXPECT_EQ(ll.GetCurrent().next, nullptr);
}

TEST(DataStructure_LinkedList, Insert) {
	LinkedList ll {};
	Node node_128 { 128 };
	ll.Insert(&node_128);
	ll.Next();

	EXPECT_EQ(ll.GetCurrent().value, 128);
	EXPECT_EQ(ll.GetCurrent().next, nullptr);

	EXPECT_NE(ll.GetCurrent().value, 0);
	EXPECT_NE(ll.GetCurrent().next, &node_128);
}

TEST(DataStructure_LinkedList, InsertBetween) {
	LinkedList ll { 128 };

	Node node_512 { 512 };
	ll.Insert(&node_512);

	Node node_256 { 256 };
	ll.Insert(&node_256);

	EXPECT_EQ(ll.GetCurrent().value, 128);
	EXPECT_EQ(ll.GetCurrent().next, &node_256);

	ll.Next();

	EXPECT_EQ(ll.GetCurrent().value, 256);
	EXPECT_EQ(ll.GetCurrent().next, &node_512);

	ll.Next();

	EXPECT_EQ(ll.GetCurrent().value, 512);
	EXPECT_EQ(ll.GetCurrent().next, nullptr);
}

TEST(DataStructure_LinkedList, IsLast) {
	LinkedList ll {};
	EXPECT_TRUE(ll.IsLast());

	Node node_128 { 128 };
	ll.Insert(&node_128);
	ll.Next();
	EXPECT_TRUE(ll.IsLast());

	ll.Reset();
	EXPECT_FALSE(ll.IsLast());

	ll.Next();
	EXPECT_TRUE(ll.IsLast());
}

TEST(DataStructure_LinkedList, Reset) {
	LinkedList ll {};
	Node node_128 { 128 };
	ll.Insert(&node_128);
	ll.Next();
	ll.Reset();

	EXPECT_EQ(ll.GetCurrent().value, 0);
	EXPECT_EQ(ll.GetCurrent().next, &node_128);

	EXPECT_NE(ll.GetCurrent().value, 128);
	EXPECT_NE(ll.GetCurrent().next, nullptr);

	ll.Reset(); // Проверка повторного вызова Reset

	EXPECT_EQ(ll.GetCurrent().value, 0);
	EXPECT_EQ(ll.GetCurrent().next, &node_128);

	EXPECT_NE(ll.GetCurrent().value, 128);
	EXPECT_NE(ll.GetCurrent().next, nullptr);
}

TEST(DataStructure_LinkedList, Next) {
	LinkedList ll {};
	Node node_128 { 128 };
	Node node_256 { 256 };
	ll.Insert(&node_128);
	ll.Next();
	ll.Insert(&node_256);
	ll.Reset();

	EXPECT_FALSE(ll.IsLast());

	EXPECT_EQ(ll.GetCurrent().value, 0);
	EXPECT_EQ(ll.GetCurrent().next, &node_128);

	EXPECT_NE(ll.GetCurrent().value, 128);
	EXPECT_NE(ll.GetCurrent().next, &node_256);

	EXPECT_NE(ll.GetCurrent().value, 256);
	EXPECT_NE(ll.GetCurrent().next, nullptr);

	ll.Next();

	EXPECT_FALSE(ll.IsLast());

	EXPECT_EQ(ll.GetCurrent().value, 128);
	EXPECT_EQ(ll.GetCurrent().next, &node_256);

	EXPECT_NE(ll.GetCurrent().value, 0);
	EXPECT_NE(ll.GetCurrent().next, &node_128);

	EXPECT_NE(ll.GetCurrent().value, 256);
	EXPECT_NE(ll.GetCurrent().next, nullptr);

	ll.Next();

	EXPECT_TRUE(ll.IsLast());

	EXPECT_EQ(ll.GetCurrent().value, 256);
	EXPECT_EQ(ll.GetCurrent().next, nullptr);

	EXPECT_NE(ll.GetCurrent().value, 128);
	EXPECT_NE(ll.GetCurrent().next, &node_256);

	EXPECT_NE(ll.GetCurrent().value, 0);
	EXPECT_NE(ll.GetCurrent().next, &node_128);

	// Повторный вызов Next для последнего элемента списка
	ll.Next();

	EXPECT_TRUE(ll.IsLast());

	EXPECT_EQ(ll.GetCurrent().value, 256);
	EXPECT_EQ(ll.GetCurrent().next, nullptr);

	EXPECT_NE(ll.GetCurrent().value, 128);
	EXPECT_NE(ll.GetCurrent().next, &node_256);

	EXPECT_NE(ll.GetCurrent().value, 0);
	EXPECT_NE(ll.GetCurrent().next, &node_128);

	// Возвращаемся к началу списка
	ll.Reset();

	EXPECT_FALSE(ll.IsLast());

	EXPECT_EQ(ll.GetCurrent().value, 0);
	EXPECT_EQ(ll.GetCurrent().next, &node_128);

	EXPECT_NE(ll.GetCurrent().value, 128);
	EXPECT_NE(ll.GetCurrent().next, &node_256);

	EXPECT_NE(ll.GetCurrent().value, 256);
	EXPECT_NE(ll.GetCurrent().next, nullptr);
}


TEST(DataStructure_LinkedList, RemoveNext) {
	// Создать список из двух узлов
	LinkedList ll { 128 };

	Node node_512 { 512 };
	ll.Insert(&node_512);

	// Вставить еще один элемент в середину списка
	Node node_256 { 256 };
	ll.Insert(&node_256);
	ll.Next();

	ll.Reset(); // Перейти в начало списка
	ll.RemoveNext(); // Удалить второй элемент

	EXPECT_EQ(ll.GetCurrent().value, 128);
	EXPECT_EQ(ll.GetCurrent().next, &node_512);

	EXPECT_NE(ll.GetCurrent().value, 256);
	EXPECT_NE(ll.GetCurrent().value, 512);

	EXPECT_NE(ll.GetCurrent().next, &node_256);
	EXPECT_NE(ll.GetCurrent().next, nullptr);

	ll.Next(); // Перейти ко второму элементу

	EXPECT_EQ(ll.GetCurrent().value, 512);
	EXPECT_EQ(ll.GetCurrent().next, nullptr);

	EXPECT_NE(ll.GetCurrent().value, 128);
	EXPECT_NE(ll.GetCurrent().value, 256);

	EXPECT_NE(ll.GetCurrent().next, &node_256);
	EXPECT_NE(ll.GetCurrent().next, &node_512);

	// Попытка удалить следующий элемент, 
	// когда текущий элемент является последним
	ll.RemoveNext();

	EXPECT_EQ(ll.GetCurrent().value, 512);
	EXPECT_EQ(ll.GetCurrent().next, nullptr);

	EXPECT_NE(ll.GetCurrent().value, 128);
	EXPECT_NE(ll.GetCurrent().value, 256);

	EXPECT_NE(ll.GetCurrent().next, &node_256);
	EXPECT_NE(ll.GetCurrent().next, &node_512);

	ll.Reset(); // Вернуться в начало списка
	ll.RemoveNext(); // Кдалить второй элемент

	// В списке теперь только один узел
	EXPECT_EQ(ll.GetCurrent().value, 128);
	EXPECT_EQ(ll.GetCurrent().next, nullptr);

	EXPECT_NE(ll.GetCurrent().value, 256);
	EXPECT_NE(ll.GetCurrent().value, 512);

	EXPECT_NE(ll.GetCurrent().next, &node_256);
	EXPECT_NE(ll.GetCurrent().next, &node_512);
}
