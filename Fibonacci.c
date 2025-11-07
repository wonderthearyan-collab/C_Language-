#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);

    int a = -1, b = 1, c;

    for (int i = 1; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ",c);
    }
    
    printf("\n");
    return 0; 
}