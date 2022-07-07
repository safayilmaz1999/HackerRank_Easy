#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int marks_summation(int* p, int number_of_students, char gender) {
    int s = 0, i = 0;
    if (gender == 'g') {
        i++;
    }
    for (; i < number_of_students; i = i+2) {
        s += p[i];       
    }
    return s;
}
int main() {
    int number_of_students;
    char gender;
    int sum;
    int student;
  	int marks2[100]= {0};
    scanf("%d", &number_of_students);
    
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (student = 0; student < number_of_students; student++) {
        scanf("%d", (marks2 + student));
    }
    scanf(" %c", &gender);
    sum = marks_summation(marks2, number_of_students, gender);
    printf("%d", sum);
    free(marks);
    return 0;
}


