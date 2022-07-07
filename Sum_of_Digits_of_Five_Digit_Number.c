#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, a, b, c, d, e, ans;
    scanf("%d", &n);
    if ((10000<=n) && (n<=99999))
    {
    	a = n/10000;
    	b = n/1000 -10*a;
    	c = n/100 - 100*a - 10*b;
    	d = n/10 - 1000*a - 100*b - 10*c;
    	e = n/1 - 10000*a - 1000*b - 100*c - 10*d;
    	ans = a + b + c + d + e;
    	printf("%d", ans);
	}
	else 
	{
		printf("10000<=n<=99999 arasý bir sayi girin");
	}
    
    //Complete the code to calculate the sum of the five digits on n.
    
    
    return 0;
}
