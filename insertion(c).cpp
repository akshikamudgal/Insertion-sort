#include <stdio.h>
int main()
{
    int n, i, j, temp;
    int a[64];
 
    printf("Enter number of elements\n");
    scanf("%d", &n);
 
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1 ; i <= n - 1; i++)
    {
	   temp= a[i];
	   j= i-1;
         while ( j > 0 && a[j] > temp)
            {	        
                a[j+1] = a[j];
                j--;
            }
            a[j+1]=temp;
    }
    printf("Sorted list in ascending order:\n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}

