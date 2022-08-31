/*
 * @Authors: Hakan CERAN
 * @Date: 31.08.2022
 * @Content: Special Pythagorean triplet
 **/

#include <iostream>

#define SIZE 1000

using namespace std;

bool isPythagorean(int a, int b, int c)
{
    if((a * a) + (b * b) ==  (c * c))
    {
        return true;
    } else
    {
        return false;
    }
}

int main()
{
    for(int i = 1; i < SIZE; i++)
    {
        for(int j = i; j < SIZE; j++)
        {
            for(int k = j; k < SIZE; k++)
            {
                if(((i + j + k) == 1000) && isPythagorean(i, j, k))
                {
                    cout << "i * j * k: " << (i * j * k) << endl << endl;
                }
            }
        }
    }

    return 0;
}