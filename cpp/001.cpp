/* 
 * http://projecteuler.net
 * 
 * Задача №1
 * 
 * Якщо виписати всі натуральні числа менше 10, кратні 3 або 5,
 * то отримаємо 3, 5, 6 і 9. Сума цих чисел - 23.
 * 
 * Знайти суму всіх числел менше 1000, кратних 3 або 5.
*/

#include <iostream>
using namespace std;

int main()
{
	int result = 0;
	int max_number = 1000;
	int i = 1;
	
	while (i < max_number)
	{
		if (!(i%3) || !(i%5))
		{
			result += i;
		}
		
		i++;
	}
	
	cout << "Сума чисел: " << result << endl;
}

/* 
 * Сума чисел: 233168
 * 
 * Час: 0m0.001s
*/
