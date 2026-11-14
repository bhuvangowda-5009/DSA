#include <stdio.h>

void readInput(int *a, int *d, int *n);
int nthTerm(int a, int d, int n);
int sumAP(int a, int d, int n);
void outputTerms(int a, int d, int n);
void outputSummary(int nth, int sum);

void readInput(int *a, int *d, int *n)
{
    printf("Enter first term: ");
    scanf("%d", a);

    printf("Enter common difference: ");
    scanf("%d", d);

    printf("Enter number of terms: ");
    scanf("%d", n);
}

int nthTerm(int a, int d, int n)
{
    return a+(n-1)*d;
}

int sumAP(int a, int d, int n)
{

    return n*(2*a+(n-1)*d)/2;
}

 void outputTerms(int a, int d, int n)
{
    int i;

    printf("AP Terms: ");

    for(i=0;i<n;i++)
    {
        printf("%d ",a+i*d);
    }

    printf("\n");
}

void outputSummary(int nth, int sum)
{
    printf("Nth Term = %d\n", nth);
    printf("Sum of AP = %d\n", sum);
}

int main()
{
    int a, d, n;
    int nth, sum;

    readInput(&a, &d, &n);

    nth = nthTerm(a, d, n);
    sum = sumAP(a, d, n);

    outputTerms(a, d, n);
    outputSummary(nth, sum);

    return 0;
}