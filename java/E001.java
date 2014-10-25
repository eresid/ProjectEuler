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

public class E001
{
	public static void main(String[] args)
	{
	  	int result = 0;
		int maxNumber = 1000;
		int i = 1;
	
		while (i < maxNumber)
		{
			if (i % 3 == 0 || i % 5 == 0)
			{
				result += i;
			}
		
			i++;
		}

		System.out.println("Сума чисел: " + result);
	}
}

/* 
 * Сума чисел: 233168
 * 
 * Час: 0m0.069s
*/
