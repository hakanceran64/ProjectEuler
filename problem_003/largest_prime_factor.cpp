/*
 * @Authors: Hakan CERAN
 * @Date: 23.08.2022
 * @Content: Largest prime factor
 **/

#include <iostream>

using namespace std;

void primeFactors(uint64_t n)
{
    bool status = true;
    int factors[100] = {0};
    int count = 0;
    uint64_t dividing = 2;

    while(status)
    {
        if(n % dividing == 0)
        {
            n /= dividing;

            if(dividing != factors[count - 1])
            {
                factors[count] = dividing;
                count += 1;
                cout << dividing << " ";
            }
        } else
        {
            dividing += 1;
        }

        if(n == 1)
        {
            status = false;
        }

    }

    cout << endl << endl;
}

int main()
{
    primeFactors(600851475143);
    return 0;
}
