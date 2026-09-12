#include <stdio.h>

// 0 1 1 2 3 5 8 ....
// n * n-1
int fibonacci(int n)
{

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
       { return fibonacci(n-2) + fibonacci(n - 1);}
}

int main()
{
    int n;
    printf("enter the value of n ");
    scanf("%d", &n);
for (int i = 0; i < n; i++)
{
      printf(" %d\n", fibonacci(i));

}
    return 0;
}