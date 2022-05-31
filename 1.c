
#include <stdio.h>
#include <stdlib.h>
void read_array(int a[] ,int n);
void count(int a [],int n);
int main()
{
   int n;

    printf("Valu1 of n:");
    scanf("%d",&n);
     int a[n];
    read_array(a,n);
    count(a,n);
    return 0;
}
void read_array(int a[],int n)
{   int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void count(int a[],int n)
{
    int i,posi=0,nega=0; //positive count(posi),negative count(nega).
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            posi++;
        }
        if(a[i]<0)
        {
            nega++;
        }
    }
    printf("+ve count=%d\n -ve count=%d\n",posi,nega);
}
