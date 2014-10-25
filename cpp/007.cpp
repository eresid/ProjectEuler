/* 
 * http://projecteuler.net
 * 
 * Завдання №7
 * 
 * Шляхом перерахунку перших шести простих чисел: 2, 3, 5, 7, 11 і 13,
 * ми бачимо, що 6-те просте число -  становить 13.
 * Знайти 10001-ше просте число.
*/

#include <iostream>
#include <cmath>
using namespace std;

int NextPrimeNumber(int previous)
{
	int temp = previous + 1;
	int next = 0;
	int exit = 0;
	int i = 2;		// дільник
	
	while (exit == 0) {
		if (temp%i == 0 && i!=temp) {
			temp++;
			i=2;
			continue;
		}
		if ((i==temp) || (i>sqrt(temp))){
			next = temp;
			exit = 1;
		}
		i++;
	}
	return next;
}

int main()
{
	int nux = 2;		// перше просте число від якого рахувати
	int number = 10001;	// порядкове просте число, яке потрібно знайти
	
	for (int i=1; i<number; i++) {
		nux = NextPrimeNumber(nux);
	}
	cout << "10001-ше просте число: " << nux << endl;
}

/* 
 * 10001-ше просте число: 104743
 * 
 * real	0m0.131s
*/
