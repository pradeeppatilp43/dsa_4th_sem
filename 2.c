#include <stdio.h>
#include <stdlib.h>
void read_array(int a[100],int n);
void check(int a[100],int n);
int main()
{
   int a[100],n;
    printf("Value2 of n:");
    scanf("%d",&n);
    read_array(a,n);
    check(a,n);
    return 0;
}
void read_array(int a[100],int n)
{   int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
    void check(int a[100],int n)
    {
        int checker=0,k,i;//key.

        printf("enter key\n");
         scanf("%d",&k);
        for(i=0;i<n;i++)
    {
    if(k==a[i])
    {
        checker=1;
        printf("Match found for the no. %d @ position %d\n ",a[i],i+1);
    }
    }
    if(checker==0)
    {
        printf("No Match found ");
    }
    }
