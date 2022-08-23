/*
 * @Author: Hakan CERAN
 * @Date: 20.08.2022
 * @Content: Integer Right Triangles
 **/

#include <iostream>

#define MAX 1000

using namespace std;

int pCount(int number)
{
    int a, b, c, p, result = 0;

    for(a = 1; a < MAX; a++)
    {
        for(b = 1; b < MAX; b++)
        {
            for(c = 1; c < MAX; c++)
            {
                if((a * a + b * b) == (c * c))
                {
                    p = a + b + c;

                    if(p == number)
                    {
                        result += 1;
                    }
                }
            }
        }
    }

    if(result != 0)
    {
        cout << "indis: " << number << " result: " << result << endl;
    }

    return result;
}

int arrayMax(int *arrayList)
{
    int max = 0;
    int max_indis = 0;
    
    for(int i = 0; i < MAX; i++)
    {
        if(max > arrayList[i])
        {
            max = arrayList[i];
            max_indis = i;
            
            cout << "Yeni Max: " << max << endl;
        }
    }

    return max_indis;
}

int main()
{
    int p_values[MAX];
    int max_indis = 0;

    for(int i = 1; i <= MAX; i++)
    {
        p_values[i] = i;
    }

    for(int i = 0; i < MAX; i++)
    {
        p_values[i] = pCount(i);
    }

    max_indis = arrayMax(p_values);

    cout << "Max P indis: " << max_indis << endl;
    cout << "Max P value: " << p_values[max_indis] << endl;

    return 0;
}
