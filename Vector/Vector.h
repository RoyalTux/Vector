#pragma once
#include <iostream>

class Vector 
{
public:
	Vector();
	Vector(int x);
	Vector(const Vector& v);
	void push_back(int x);
	int size() { return _numElements; }
	void reverse();
	void set(int x, int i);
	void clear() { _numElements = 0; }
	int empty();
	void pop_back();
	int insert(int x, int i);
	void print();
	Vector& operator=(const Vector& v);
	int& operator[](int i);
	~Vector(); 

private:
	int *_array;
	int _numElements;
	int _capacity;
	void extend(); // для увеличения массива
};
