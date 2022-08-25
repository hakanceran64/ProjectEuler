/*
 * @Authors: Hakan CERAN
 * @Date: 25.08.2022
 * @Content: Sum square difference
 **/

#include <iostream>

using namespace std;

uint64_t sumOfTheSquares(int number)
{
    uint64_t sum = 0;

    for(int i = 1; i <= number; i++)
    {
        sum += (i*i);
    }

    return sum;
}

uint64_t squareOfTheSum(int number)
{
    uint64_t sum = 0;

    for(int i = 1; i <= number; i++)
    {
        sum += i;
    }

    return (sum * sum);
}

int main()
{

    cout << "Sum of the Square: " << sumOfTheSquares(100) << endl;
    cout << "Square of the Sum: " << squareOfTheSum(100) << endl;

    uint64_t result = squareOfTheSum(100) - sumOfTheSquares(100);

    cout << "Result: " << result << endl;

    return 0;
}