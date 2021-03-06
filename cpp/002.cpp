/* 
 * http://projecteuler.net
 * 
 * Завдання №2
 * 
 * Кожен новий член послідовності Фібоначчі формується шляхом складання 
 * двох попередніх чисел. Починаючи з 1 і 2, перші 10 чисел будуть: 
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
 * Знайти суму всіх парних чисел в цій послідовності, які не
 * перевищують чотирьох мільйонів.
*/

#include <iostream>
using namespace std;

int main()
{
	int amount = 0;					// сума парних чисел
	int max_number = 4000000;		// число до якого вести перевірку
	int f = 2;						// числа Фібоначчі
	int f_old = 1;					// старе значення Фібоначчі
	
	while (f < max_number) {
		if (!(f%2)) {
			amount += f;
			cout << f << " ";
		}
		f += f_old;			// визначаємо нове число
		f_old = f - f_old;	// визначаємо попереднє число для наступного циклу
	}
	cout << endl << "Сума чисел: " << amount << endl;
}

/* 
 * 2 8 34 144 610 2584 10946 46368 196418 832040 3524578 
 * Сума чисел: 4613732
 * 
 * real	0m0.002s
*/
