#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function   
    int sum, dif;
    sum = *a + *b;
    dif = abs(*a - *b);
    *a = sum;
    *b = dif;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
   update(pa, pb); 
    printf("%d\n%d", a, b);

    return 0;
}

//*a = x -> x in adresini a al�r. update ile fonksiyonun i�ine yaz�yoruz.
