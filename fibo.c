#include <stdio.h>
void main()
{
    int i, n, t1 = 0, t2 = 1, n1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        n1= t1 + t2;
        t1 = t2;
        t2 = n1;
    }
    return 0;
}
