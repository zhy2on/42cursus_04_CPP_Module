#include <iostream>
#include <stack>

template <typename T>
class Test
{
	typedef typename std::stack<T>::iterator iterator;
};

int main()
{
	std::cout << "test" << std::endl;
}
