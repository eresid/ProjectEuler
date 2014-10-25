/* 
 * http://projecteuler.net
 * 
 * Завдання №5
 * 
 * 2520 є найменшим числом, яке може бути розділене на кожне з чисел
 * від 1 до 10 без залишку. Знайти найменше число, яке ділиться на всі
 * цифри від 1 до 20?
*/

#include <iostream>
using namespace std;

unsigned long fact(unsigned int n)
{
	int neo = 1;			// факторіал числа
	for (int i=1; i<=n; i++) {neo = neo * i;}
	return neo;
}

int MinNumber(int a)
{
	unsigned int factorial;	// факторіал числа
	int test = 0;			// перевірка на остачу
	
	factorial = fact(a);
	for (unsigned int i=1; i<=factorial; i++) {
		for (int j=1; j<=a; j++) {
			test += i%j;
		}
		if (test == 0) return i;
		test = 0;
	}
	return 0;
}

int main()
{
	int nux = 20;	// число, до якого повинно ділитись мінімальне число
	cout << "Найменше число: " << MinNumber(nux) << endl;
}

/*
 * Найменше число: 232792560
 * 
 * real	1m31.779s
*/
