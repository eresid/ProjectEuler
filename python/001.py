#!/usr/bin/env python
# -*- coding: utf-8 -*-

# http://projecteuler.net
#
# Задача №1
#
# Якщо виписати всі натуральні числа менше 10, кратні 3 або 5,
# то отримаємо 3, 5, 6 і 9. Сума цих чисел - 23.
#
# Знайти суму всіх числел менше 1000, кратних 3 або 5.

def main():
	result = 0

	for i in range(0, 1000):
		if (i % 3 == 0 or i % 5 == 0):
			result += i

	print ("Сума чисел: " + str(result))

	return 0

if __name__ == '__main__':
	main()


# Сума чисел: 233168
# Час: 0m0.023s

