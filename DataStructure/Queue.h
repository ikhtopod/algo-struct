#pragma once

#include <queue>

namespace insoLLLent::DataStructure {

/**
	\brief dummy queue
*/
template<typename T>
class Queue {
public:
	std::queue<T> m_queue {};
};

} // namespace insoLLLent::DataStructure
