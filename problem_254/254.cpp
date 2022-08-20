#include <iostream>
#include <conio.h>

using namespace std;

int faktoriyel (int N) {
    if (N == 0)
        return 1;
    else if (N == 1)
    	 return 1;
    else
        return (N * faktoriyel(N - 1));
}

int f (int N) {
    int f_sum = 0;
    int digit = 0;
 
    while (N > 0) {
        digit = N%10;

        f_sum += faktoriyel(digit);

        N /= 10;
    }
    
    return f_sum;
}

int sf (int N) {
    unsigned long int sf_sum = 0;
    int digit = 0;
    
    N = f(N);

    while (N > 0) {
        sf_sum += (N % 10);
        
        N /= 10;
    }

    return sf_sum;
}

int g () {
    return 0;
}

int sg () {
    return 0;
}

int main() {
    int count = 0;
    int g[150] = {0};
    unsigned long int temp = 0;
	unsigned long int i = 0;
	// unsigned long long 18,446,744,073,709,551,615
    while (count < 150) {
		temp = sf(i);
		if (temp > 149)
		   continue;
		else if (g[temp] == 0) {
        	g[temp] = i;
			count++;
        }
   i++;
   }
    for (int i = 0; i < 150; i++) {
    	cout << "g(" << i << "): " << g[i] << endl;
	}
   
    system("PAUSE");
    return 0;
}

