#include <stdio.h>
int main() 
{
    //intializing the first two terms of fibonacci series
    int n, t1 = 0, t2 = 1, nextterm;
    //asking user for number of terms
    printf("No. of terms in fibonacci series:- ");
    scanf("%d", &n);
    //printing the fibonacci series
    printf("Fibonacci series:\n%d %d", t1, t2);
    for (int i = 3; i <= n; i++)
    {
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
        printf(" %d", nextterm);
    }
    printf("\n");
}
