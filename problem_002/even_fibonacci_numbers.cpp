/*
 * @Authors: Hakan CERAN
 * @Date: 23.08.2022
 * @Content: Even Fibonacci Numbers
 **/

#include <iostream>

#define MAX 34

using namespace std;

int evenFibonacci(int n)
{
    int t1 = 0, t2 = 1, sum, even_sum = 0;

    for(int i = 1; i <= n; i++)
    {
        if(i == 1)
        {
            continue;
        } else if(i == 2)
        {
            continue;
        }

        sum = t1 + t2;

        t1 = t2;
        t2 = sum;

        if(sum % 2 == 0)
        {
            even_sum += sum;
        }
    }

    return even_sum;
}

void fibonacci(int n)
{
    int t1 = 0, t2 = 1;
    uint64_t sum = 0;

    for(int i = 1; i <= n; i++)
    {
        if(i == 1)
        {
            cout << i << ". " << t1 << " " << endl;
            continue;
        } else if(i == 2)
        {
            cout << i << ". " << t2 << " " << endl;
            continue;
        }

        sum = t1 + t2;

        t1 = t2;
        t2 = sum;

        cout << i << ". " << sum << " " << endl;

        if(sum > 4000000)
        {
            cout << "Sınır aşıldı." << endl;
            break;
        }
    }
}

int main()
{
    fibonacci(MAX);
    cout << "Even sum: " << evenFibonacci(MAX) << endl;

    return 0;
}