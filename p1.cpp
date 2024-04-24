#include <stdio.h>

int main()
{
    int arr[100] , i , n;

    printf("Enter size of the array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("arr[%d][%d]",i);
        scanf("%d",&arr[i]);
    }

    printf("\n All negative elements in array are : ");
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            printf("%d",arr[i]);
        }
    }
}
