#include <stdio.h>

int main(){
    int marks1, marks2, marks3, marks4, marks5;
    int totalMarks;
    float averageMarks;

    printf("Enter marks for 5 subjects: ");
    scanf("%d %d %d %d %d", &marks1, &marks2, &marks3, &marks4, &marks5);

    totalMarks = marks1 + marks2 + marks3 + marks4 + marks5;
    averageMarks = totalMarks / 5.0;
    
    printf("Marks entered: %d, %d, %d, %d, %d\n", marks1, marks2, marks3, marks4, marks5);

    if(averageMarks >= 90){
        printf("Grade: Ex");
    } else if(averageMarks >= 80){
        printf("Grade: A");
    } else if(averageMarks >= 70){
        printf("Grade: B");
    } else if(averageMarks >= 60){
        printf("Grade: C");
    } else {
        printf("Grade: F");
    }
    return 0;
}