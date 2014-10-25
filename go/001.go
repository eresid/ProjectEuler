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

package main

import "fmt"
import "time"

func mySolution() int {
	var result int = 0

	for i := 1; i <= 999; i++ {
		if i % 3 == 0 || i % 5 == 0 {
			result = result + i
		}
	}
	
	return result
}

func sumDivisibleBy(value int) int {
	var target = 999
	var p = target / value
	
	return value * (p * (p + 1)) / 2
}

func bestSolution() int {
	return (sumDivisibleBy(3) + sumDivisibleBy(5) - sumDivisibleBy(15))
}

func main() {
	fmt.Println(time.Now())
	fmt.Println("Сума чисел 1: ", mySolution())
	fmt.Println(time.Now())
	fmt.Println("Сума чисел 2: ", bestSolution());
	fmt.Println(time.Now())
}

/* 
 * Сума чисел: 233168
 * 
 * Час: 0m0.020s
*/
