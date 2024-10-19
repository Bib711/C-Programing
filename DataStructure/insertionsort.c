#include<stdio.h>
void main()
{
    int i,j,a[100],n,temp;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;

    }
    printf("sorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
