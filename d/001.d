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

module src;

import std.stdio;

int mySolution() {
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
	
	return result;
}

int sumDivisibleBy(int value) {
	int target = 999;
	int p = target / value;
	
	return value * (p * (p + 1)) / 2;
}

int bestSolution() {
	return (sumDivisibleBy(3) + sumDivisibleBy(5) - sumDivisibleBy(15));
}

void main()
{
	printf("Сума чисел 1: %d\n", mySolution());
	printf("Сума чисел 2: %d\n", bestSolution());
}

/* 
 * Сума чисел: 233168
 * 
 * Час: 0m0.002s
*/
