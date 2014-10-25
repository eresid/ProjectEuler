/* 
 * http://projecteuler.net
 * 
 * Завдання №10
 * 
 * Сума простих чисел менше 10 - це 2 + 3 + 5 + 7 = 17.
 * 
 * Знайдіть суму всіх простих чисел менше двох мільйонів.
*/

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int NextPrimeNumber(long long int previous)
{
	long long int temp = previous + 1;
	long long int next = 0;
	long long int exit = 0;
	long long int i = 2;		// дільник
	
	while (exit == 0) {
		//if (sqrt(temp) ціле - то воно виключається
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
	long long int nux = 2;			// перше просте число від якого рахувати
	long long int MAX = 2000000;	// максимальне просте число
	long long int sum = 0;			// відповідь
	long int lich = 0;
	ofstream outfile ("010.txt");
	
	while (nux < MAX) {
		sum += nux;
		nux = NextPrimeNumber(nux);
		lich++;
		if (lich%1000 == 0) {
			cout << lich << " = " << sum << "(" << nux << ")" << endl;
			outfile << lich << " = " << sum << "(" << nux << ")" << endl;
		}
	}
	cout << "Сума: " << sum << endl;
	outfile << "Сума: " << sum << endl;
	
	outfile.close();
}

/* 
 * Сума: 142913828922
 * 
 * real	0m13.092s
 * 
 * 148933 простих чисел
*/
