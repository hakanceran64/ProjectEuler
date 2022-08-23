/*
 * @Authors: Hakan CERAN
 * @Date: 24.08.2022
 * @Content: Smallest multiple
 **/

#include <iostream>

using namespace std;

int main()
{
    int n = 1;

    while(true)
    {
        int status = true;
    
        for(int i = 1; i <= 20; i++)
        {
            if(n % i != 0){
                status = false;
            }
        }

        if(status == true)
        {
            break;
        }

        n += 1;
    }

    cout << "n: " << n;

    return 0;
}