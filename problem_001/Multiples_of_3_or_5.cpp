/*
 * @Author: Hakan CERAN
 * @Date: 21.08.2022
 * @Content: Multiples of 3 or 5
 **/

#include <iostream>

#define MAX 1000

using namespace std;

int main()
{
    int sum = 0;

    for(int i = 1; i < MAX; i++)
    {
        if((i % 3 == 0) | (i % 5 == 0))
        {
            sum += i;
        }
    }

    cout << "Sum: " << sum << endl;

    return 0;
}