/* 
 * http://projecteuler.net
 * 
 * Завдання №3
 * 
 * Простими дільниками числа 13195 є 5,7,13 і 29.
 * Знайти найбільше просте число з 600851475143.
*/

#include <iostream>
#include <cmath>
using namespace std;

int MiniPrimeFactor(long long int a)
{
	for (int i=2; i<=a; ++i) {
		if (!(a%i)) {return i;}
	}
	return 0;
}

int main()
{
	long long int max_number = 0;			// отримане число
	long long int get_number;				// найменше просте число числа
	long long int number;					// число якого знайти найбільший дільник
	number = 600851475143;
	
	while (number > 1) {
		get_number = MiniPrimeFactor(number);
		cout << get_number << " ";
		
		if (max_number < get_number) {
			max_number = get_number;
		}
		
		number = number/get_number;
	}
	cout << endl << "Найбільше просте число з 600851475143: " << max_number << endl;
}

/*
 * 71 839 1471 6857 
 * Найбільше просте число з 600851475143: 6857
 * 
 * real	0m0.002s
*/
