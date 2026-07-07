#include <stdio.h>

int main() {
    int n, i;
    float marks[10], total = 0, average;
    char name[50];

    printf("===== Student Grade Manager =====\n");
    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter number of subjects (max 10): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter marks for Subject %d (out of 100): ", i+1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    average = total / n;

    printf("\n===== RESULT FOR %s =====\n", name);
    printf("Total Marks : %.2f / %d\n", total, n * 100);
    printf("Average     : %.2f%%\n", average);

    printf("Grade       : ");
    if(average >= 90)
        printf("A+ (Outstanding)\n");
    else if(average >= 80)
        printf("A  (Excellent)\n");
    else if(average >= 70)
        printf("B  (Good)\n");
    else if(average >= 60)
        printf("C  (Average)\n");
    else if(average >= 50)
        printf("D  (Pass)\n");
    else
        printf("F  (Fail)\n");

    return 0;
}
