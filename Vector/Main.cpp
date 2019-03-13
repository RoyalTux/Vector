#include "Vector.h"

int main() 
{
	Vector v_1;
	Vector v_2(30);
	
	std::cout << "\nCheck size and empty state of array" << std::endl << std::endl;
	v_2.pop_back();
	v_2.push_back(5);
	std::cout << "Size: " << v_1.size() << " Is empty: " << v_1.empty() << std::endl;
	std::cout << "Size: " << v_2.size() << " Is empty: " << v_2.empty() << std::endl;

	std::cout << "\nView array" << std::endl << std::endl;
	v_1.print();
	v_2.print();

	std::cout << "\nArray fill and view them" << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
	{
		v_1.push_back(i);
		v_2.push_back(i);
	}

	v_1.print();
	std::cout << std::endl;
	v_2.print();
	std::cout << "Size: " << v_1.size() << " Is empty: " << v_1.empty() << std::endl;
	std::cout << "Size: " << v_2.size() << " Is empty: " << v_2.empty() << std::endl;
	std::cout << std::endl;

	std::cout << "\nCreate third array and copy values from another array" << std::endl << std::endl;
	Vector v_3;
	v_3 = v_2;
	std::cout << "Size of third: " << v_3.size() << " Is empty: " << v_3.empty() << std::endl;
	std::cout << "\nThird array" << std::endl << std::endl;
	v_3.print();
	std::cout << "\nAnd initial array" << std::endl << std::endl;
	v_2.print();
	std::cout << std::endl;

	std::cout << "\nDelete items from arrays" << std::endl << std::endl;
	for (int i = 0; i < 5; i++) 
	{
		v_1.pop_back();
		v_2.pop_back();
	}

	std::cout << "Size: " << v_1.size() << " Is empty: " << v_1.empty() << std::endl;
	std::cout << "Size: " << v_2.size() << " Is empty: " << v_2.empty() << std::endl;

	std::cout << "\nInsert items to arrays" << std::endl << std::endl;
	v_1.insert(22, 0);
	v_2.insert(33, 5);

	std::cout << "Size: " << v_1.size() << " Is empty: " << v_1.empty() << std::endl;
	std::cout << "Size: " << v_2.size() << " Is empty: " << v_2.empty() << std::endl;
	std::cout << std::endl;

	v_1.print();
	std::cout << std::endl;
	v_2.print();
	std::cout << std::endl;

	std::cout << "\Replace items in arrays" << std::endl << std::endl;
	v_1.set(55, 0);
	v_2.set(44, 4);
	v_1[v_1.size() - 1] = 77;
	v_2[0] = 88;
	v_1.print();
	std::cout << std::endl;
	v_2.print();

	std::cout << "\nReverse" << std::endl;
	v_1.reverse();
	v_2.reverse();
	std::cout << std::endl;
	v_2.print();

	v_1.clear();
	v_2.clear();
	std::cout << "\nafter clear: " << std::endl << std::endl;
	v_1.print();
	v_2.print();
	std::cout << "Size: " << v_1.size() << " Is empty: " << v_1.empty() << std::endl;
	std::cout << "Size: " << v_2.size() << " Is empty: " << v_2.empty() << std::endl;

	system("Pause");
}