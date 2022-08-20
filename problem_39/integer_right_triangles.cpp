/*
 * @Author: Hakan CERAN
 * @Date: 20.08.2022
 * @Content: Integer Right Triangles
 **/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int p;

    for(int i = 1; i < 1000; i++)
    {
        for(int j = 1; j < 1000; j++)
        {
            for(int k = 1; k < 1000; k++)
            {
                a = i;
                b = j;
                c = k;

                if((a * a + b * b) == (c * c))
                {
                    p = a + b + c;
                    
                    if(p == 120)
                    {
                        cout << "a: " << a << " b: " << b << " c: " << c << endl;
                    }
                }
            }
        }
    }

    return 0;
}
