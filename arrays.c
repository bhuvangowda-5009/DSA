#include <stdio.h>

void readArray(int a[], int n){};
int findSum(int a[], int n){};
float findAverage(int sum, int n){};
void outputSummary(int sum, float average){};

void readArray(int a[], int n)
{
    int i;

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

int findSum(int a[], int n)
{   
    int i, sum = 0;

    for(i=0;i<n;i++)    {
        sum=sum+a[i];
    }
    return sum;
}

float findAverage(int sum, int n)
{
    return (float)sum / n;
}

void outputSummary(int sum, float average)
{
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
}

int main()
{
    int a[100], n;
    int sum;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    readArray(a, n);

    sum = findSum(a, n);
    average = findAverage(sum, n);
    outputSummary(sum, average);

    return 0;
}
















































