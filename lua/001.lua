--[[
	http://projecteuler.net

	Задача №1

	Якщо виписати всі натуральні числа менше 10, кратні 3 або 5,
	то отримаємо 3, 5, 6 і 9. Сума цих чисел - 23.

	Знайти суму всіх числел менше 1000, кратних 3 або 5.
--]]

function mySolution()
	local result = 0

	for i = 1, 999 do
		if i % 3 == 0 or i % 5 == 0 then
			result = result + i
		end
	end
	
	return result
end

function sumDivisibleBy(value)
	target = 999
	p = math.floor(target / value) -- float to int

	return value * (p * (p + 1)) / 2
end

function bestSolution()
	return (sumDivisibleBy(3) + sumDivisibleBy(5) - sumDivisibleBy(15))
end

print("Сума чисел 1: " .. mySolution())
print("Сума чисел 2: " .. bestSolution())

--[[
	Сума чисел: 233168

	Час: 0m0.002s
--]]
