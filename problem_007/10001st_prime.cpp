/*
 * @Authors: Hakan CERAN
 * @Date: 26.08.2022
 * @Content: 10001st prime
 **/

#include <iostream>

#define SIZE 10001

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
    int number = 2;

    while(count < SIZE)
    {
        if(isPrime(number) == true)
        {
            prime[count++] = number;
            cout << count << ". Prime: " << number << endl;
        }

        number++;
    }

    return 0;
}