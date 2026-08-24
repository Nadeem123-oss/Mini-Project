#include <stdio.h>
#define MAX 50
#define SUBJECTS 5
char getGrade(float percentage)
{
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else if (percentage >= 50)
        return 'E';
    else
        return 'F';
}
int calculateTotal(int marks[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
        total += marks[i];
   return total;
}
int main()
{
    int n, subjects;
    char name[MAX][50];
    int marks[MAX][SUBJECTS];
    int total[MAX];
    float percentage[MAX];
    char grade[MAX];
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("Enter number of subjects (3-5): ");
    scanf("%d", &subjects);
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter name of student %d: ", i + 1);
        scanf(" %[^\n]", name[i]);
        for (int j = 0; j < subjects; j++)
        {
            printf("Enter marks in subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);}
        total[i] = calculateTotal(marks[i], subjects);
        percentage[i] = (float)total[i] / (subjects * 100) * 100;
        grade[i] = getGrade(percentage[i]);
}
    printf("\n====== STUDENT RESULTS ======\n");
    for (int i = 0; i < n; i++){
        printf("\nStudent: %s\n", name[i]);
        printf("Total Marks: %d\n", total[i]);
        printf("Percentage: %.2f%%\n", percentage[i]);
        printf("Grade: %c\n", grade[i]);}
    int highest = 0;
    for (int i = 1; i < n; i++){
        if (percentage[i] > percentage[highest])
            highest = i;}
    printf("\n========== TOP STUDENT ==========\n");
    printf("Name: %s\n", name[highest]);
    printf("Percentage: %.2f%%\n", percentage[highest]);
    printf("Grade: %c\n", grade[highest]);
   return 0;
}