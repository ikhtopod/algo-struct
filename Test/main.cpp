#include <iostream>

#include "Fibonacci.h"
#include "Queue.h"

int main(int argc, char** argv) {
	using insoLLLent::Algorithm::Fibonacci;
	using insoLLLent::DataStructure::Queue;

	Queue<int> q {};
	q.m_queue.push(Fibonacci<5>::value);
	q.m_queue.push(Fibonacci<6>::value);
	q.m_queue.push(Fibonacci<7>::value);
	q.m_queue.push(Fibonacci<8>::value);

	while (q.m_queue.size() != 0) {
		std::cout << q.m_queue.front() << std::endl;
		q.m_queue.pop();
	}

	return 0;
}
