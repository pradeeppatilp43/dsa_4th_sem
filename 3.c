#include <stdio.h>
#include <stdlib.h>
void read_array(int a[100],int n);
void salary(int a[100],int n);
int main()
{
   int a[100],n;
    printf("Value of n:\n");
    scanf("%d",&n);
    read_array(a,n);
    salary(a,n);
    return 0;
}
void read_array(int ex[100],int n)
{   int i;
  printf("enter the experience of the person\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ex[i]);
    }
}
void salary(int a[100],int n)
{
     printf("list of salary\n");
     int i,validity=0;
    for(i=0;i<n;i++,validity=0)
    {
       if(a[i]>4&&a[i]<8)
       {
           validity=1;
           printf("%d.%d \n",i+1,10600+1060);
       }
       if(a[i]>7&&a[i]<=10)
       {
           validity=1;
           printf("%d.%d \n",i+1,21300+(2130*2));
       }
       if(a[i]>10)
       {
           validity=1;
           printf("%d.%d \n",i+1,32100+(3210*3));
       }
        if(validity==0)
    {
        printf("%d.salary pending\n",i+1);
    }

    }
}
