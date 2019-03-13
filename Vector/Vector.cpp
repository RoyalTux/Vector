#include <iostream>
#include "Vector.h"

Vector::Vector()
{
	_numElements = 0;
	_capacity = 10;
	_array = new int[_capacity];
}

Vector::Vector(int x)
{
	_numElements = 0;
	_capacity = x;
	_array = new int[_capacity];
}

Vector::Vector(const Vector& v)
{
	if (!v._numElements)
		_array = 0;
	else
	{
		_array = new int[v._numElements];
		for (size_t i = 0; i < v._numElements; i++)
			_array[i] = v._array[i];
	}
	_numElements = v._numElements;
}

void Vector::push_back(int x)
{
	if (_numElements >= _capacity)
	{
		extend();
	}
	_array[_numElements] = x;
	_numElements++;
}

void Vector::reverse()
{
	int temp = 0;
	for (size_t i = 0; i < _numElements / 2; i++)
	{
		temp = _array[_numElements - 1 - i];
		_array[_numElements - 1 - i] = _array[i];
		_array[i] = temp;
	}
}

void Vector::set(int x, int i)
{
	if (_numElements > i > 0)
	{
		_array[i] = x;
	}
	else
	{
		std::cout << "Index is outside" << std::endl;
	}
}

int Vector::empty()
{
	if (_numElements == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void Vector::pop_back()
{
	_array[_numElements];
	if (_numElements > 0)
	{
		_numElements--;
	}
}

void Vector::extend()
{
	int *_array_2; 
	_array_2 = new int[2 * _capacity];
	for (size_t i = 0; i < _capacity; ++i)
	{
		_array_2[i] = _array[i];
	}
	_capacity = 2 * _capacity; 
	delete[] _array;
	_array = _array_2;
}

int Vector::insert(int x, int i)
{
	if (_numElements > i > 0)
	{
		push_back(0);

		for (size_t j = _numElements - 1; j > i; --j)
		{
			_array[j] = _array[j - 1];
		}
		_array[i] = x;
		return 0;
	}
	else
	{
		return 1;
	}
}

void Vector::print()
{
	for (size_t i = 0; i < _numElements; ++i)
	{
		std::cout << "Element position: " << i << " data: " << _array[i] << std::endl;
	}
}

Vector& Vector::operator=(const Vector& v)
{
	if (this == & v) return *this;
	if (!v._numElements)
	{
		delete[] _array;
		_array = 0;
	}
	else
	{
		int *temp = new int[v._numElements];
		for (size_t i = 0; i < v._numElements; i++)
			temp[i] = v._array[i];
		delete[] _array;
		_array = temp;
	}
	_numElements = v._numElements;
	return *this;
}

int& Vector::operator[](int i)
{
	if (i < 0 || i >= _numElements) {
		std::cout << "Index is outside" << std::endl;
		return _array[0];
	}
	return _array[i];
}

Vector::~Vector()
{
	delete[] _array;
}

