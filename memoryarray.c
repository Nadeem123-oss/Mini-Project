#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, key, sum = 0, max, min, count = 0, temp;
    int *a;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    a = malloc(n * sizeof(int));
    if (a == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    max = min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    printf("Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nMax = %d\nMin = %d\nSum = %d\nAverage = %.2f\n",
           max, min, sum, (float)sum / n);
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
        if (a[i] == key)
                 count++;
    printf("Frequency = %d\n", count);
    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    printf("Reversed array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    free(a);
    return 0;
}