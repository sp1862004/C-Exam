#include <stdio.h>

int main() {
    int marks[5];
    int sum = 0;
    float average;
    char grade;
    
    char *subjects[] = {"HTML", "JavaScript", "Bootstrep", "CSS", "React.js"};

    printf("Enter marks for the following subjects (out of 100):\n");
    for (int i = 0; i < 5; i++) {
        printf("%s: ", subjects[i]);
        scanf("%d", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid input. Please enter marks between 0 and 100.\n");
            return 1; 
        }

        sum += marks[i];
    }

    average = sum / 5.0;

    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("\nAverage Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}
