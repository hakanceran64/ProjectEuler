/*
 * @Authors: Hakan CERAN
 * @Date: 23.08.2022
 * @Content: Largest palindrome product
 **/

#include <iostream>

#define MAX 1000

using namespace std;

bool palindromeNumber(int number)
{
    int reverseNumber = 0;
    int temp = number;

    while(number != 0)
    {
        reverseNumber = (reverseNumber * 10) + (number % 10);
        number /= 10;
    }

    if(temp == reverseNumber){
        return true;
    } else
    {
        return false;
    }
}

void test()
{
    int result = 1;
    int max = 0;

    for(int i = 1; i < MAX; i++)
    {
        for(int j = 1; j < MAX; j++){
            result = i * j;

            if(palindromeNumber(result))
            {
                if(result > max)
                {
                    max = result;
                }
            }
        }
    }

    cout << endl << endl;

    cout << "Max: " << max << endl;
}

int main()
{
    test();

    return 0;
}
