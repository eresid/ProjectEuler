/* 
 * http://projecteuler.net
 * 
 * Завдання №4
 * 
 * Паліндромні числа читаються в обох напрямках однаково. Найбільший
 * Паліндром з двох 2-значних чисел 9009 = 91 × 99. Знайти найбільший
 * Паліндром з двох 3-значних чисел.
*/

#include <iostream>
using namespace std;

int ReverseString(int a)
{
	int next;
	int mas[6];
	for (int i=0; i<6; i++) {
		next = a%10;
		mas[i] = next;
		a = a/10;
	}
	next = 0;
	for (int j=0; j<6; j++) {
		next = next * 10 + mas[j];
	}
	return next;
}

int main()
{
	int i, j, zerkalo;
	int prealpha = 0;
	int max = 0;
	int min_xx = 100, min1_xx = 100;
	int max_xx = 999, max1_xx = 999;
	for (i=max_xx; i>min_xx; i--) {
		for (j=max1_xx; j>min1_xx; j--) {
			prealpha = i*j;
			zerkalo = ReverseString(prealpha);
			if (prealpha == zerkalo && prealpha > max) {
				max = prealpha;
			}
		}
	}
	cout << "Найбільший Паліндром: " << max << endl;
}

/*
 * Найбільший Паліндром: 906609
 * 
 * real	0m0.090s
*/
