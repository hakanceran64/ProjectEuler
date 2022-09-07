/*
 * @authors: Hakan CERAN
 * @date: 05.09.2022
 * @content: Highly divisible triangular number
 */

#include <iostream>

using namespace std;

uint64_t triangularNumber(uint64_t number)
{
    uint64_t sum = 0;

    for(int i = 1; i <= number; i++)
    {
        sum += i;
    }

    return sum;
}

bool divisors(uint64_t number)
{
    int totalDivisors = 0;

    for(int i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            totalDivisors += 1;
        }
    }

    if(totalDivisors > 500)
    {
        cout << "Number: " << number << ", Total Divisors: " << totalDivisors << endl << endl;

        return true;
    } else{
        return false;
    }
}

int main()
{

    uint64_t temp = 1;
    
    while (true)
    {
        if(divisors(triangularNumber(temp)))
        {
            cout << "Triangular Number: " << temp << endl << endl;
            break;
        }

        temp += 1;
    }

    // True Result:
    // Triangular Number: 12375
    // Sum: 76576500

    return 0;
}
