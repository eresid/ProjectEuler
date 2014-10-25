/* 
 * http://projecteuler.net
 * 
 * Завдання №3
 * 
 * Простими дільниками числа 13195 є 5,7,13 і 29.
 * Знайти найбільше просте число з 600851475143.
*/

/* 
 * Author: hasan
 * Created on January 24, 2010, 1:00 AM
*/

#include <iostream>
#include <cstdlib>
#include <vector>

typedef long long int lint;

std::vector<lint> getPrimeNumbers(lint border) {
    std::vector<lint> result;
    result.clear();
    result.push_back(2);
    for (lint i = 3; i < border; i++) {
        bool prime = true;
        for (lint k = 0; k < result.size(); k++) {
            if (result[k]*result[k] > i) {
                break;
            }
            if (i%result[k] == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    std::vector<lint> primeNumbers = getPrimeNumbers(800000);
    lint a = 600851475143;
    std::cout << primeNumbers.size() << std::endl;
    for (lint i = primeNumbers.size()-1; i > 0; i--) {
        if (a%primeNumbers[i] == 0) {
            std::cout << primeNumbers[i] << std::endl;
            break;
        }
    }
    return (EXIT_SUCCESS);
}

/*
 * 6857
 * 
 * real	0m0.670s
*/
