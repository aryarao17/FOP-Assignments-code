#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks[5];
    float total;
    float percentage;
};

int main() {
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        s[i].total = 0;

        printf("Enter marks of 5 subjects:\n");
        for(j = 0; j < 5; j++) {
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = s[i].total / 5;
    }
t
    printf("\n--- Student Results ---\n");

    for(i = 0; i < n; i++) {
        printf("\nRoll No: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Total: %.2f\n", s[i].total);
        printf("Percentage: %.2f%%\n", s[i].percentage);

        if(s[i].percentage >= 40)
            printf("Result: PASS\n");
        else
            printf("Result: FAIL\n");
    }

    return 0;
}
