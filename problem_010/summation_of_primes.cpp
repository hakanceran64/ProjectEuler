/*
 * @Authors: Hakan CERAN
 * @Date: 30.08.1996
 * @Content: Summation of primes
 **/

#include <iostream>

#define SIZE 2000000

using namespace std;

bool isPrime(int number)
{
    if(number == 2)
    {
        return true;
    } else
    {
        for(int i = 2; i <= (number / 2); i++)
        {
            if(number % i == 0)
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int prime[SIZE] = {0};
    int count = 0;
    uint64_t sum = 0;

    for(int i = 2; i < SIZE; i++)
    {
        if(isPrime(i) == true)
        {
            sum += i;
        }
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
