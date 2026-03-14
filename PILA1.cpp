
#include <iostream>
using namespace std;
template<class T,int n=10>
struct PILA {
	int num_elem;
	T* arr;
	T* top;
	PILA();
	~PILA();
	bool vacio();
	bool lleno();
	bool Push(T val);
	bool Pop(T &val);

};
template<class T;int n>
PILA<T,n>::PILA() {
	num_elem = n;
	arr = new T[num_elem];
	top = NULL;
}
template<class T;int n>
bool PILA<T,n>::vacio() {
	return !top;
}
template<class T; int n >
bool PILA < T;n> ::lleno() {
	return top == arr + num_elem - 1;
}
template<class T; int n >
bool PILA<T,n>::Push(T val) {
	if (vacio()) {
		top = arr;
	}
	else {
		if (lleno()) {
			return false;
		}
		else {
			top++;
		}
		*top = val;
		return true;
	}
	}
template<class T; int n >
bool PILA<T,n>::Pop(T &val) {
	if (vacio()) {
		return false;
		val = *top;
		top--;
	}
		if (top < arr) {
			top = NULL;
		}
		return true;
	}
template<class T; int n >
PILA<T,n>::~PILA() {
	delete[]arr;
}


int main()
{
	PILA<int, 20>p_int;
	p_int.push(20;)
		int a;
	p_int.pop(a);
	PILA<char>p_char;

}
