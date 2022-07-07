#include <stdlib.h>

int main() {
	
    int n, a, b, c, d, e, ans;
    scanf("%d", &n);
    	a = n/10000;
    	b = n/1000 -10*a;
    	c = n/100 - 100*a - 10*b;
    	d = n/10 - 1000*a - 100*b - 10*c;
    	e = n%1 - 10000*a - 1000*b - 100*c - 10*d;
    	ans = a + b + c + d + e;
    	printf("%d", ans);

    
    //Complete the code to calculate the sum of the five digits on n.
    
    
    return 0;
}

/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a, b, i;
    char* represent[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a, &b);
    for(i = a; i <= b; i++) {
        
        if(i > 9) {
            if(i % 2 == 0)
                printf("even\n");
            else printf("odd\n");
        }
        else {
            printf("%s\n", represent[i]);
        }
    }
    return 0;
}
*/
