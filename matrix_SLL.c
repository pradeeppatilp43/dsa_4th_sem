#include <stdio.h>
#include <stdlib.h>

typedef struct mxn
{
    int r,c;
    int a[10][10];
    struct mxn *next;
}  *node;
 node insert(node head);
node getnode ();
 node insert_pos(node head);
 void display(node head);


int main()
{
    int choice;
   node head =NULL;
   while(1)
   {
       printf("enter choiec\n");
       scanf("%d",&choice);
       switch(choice)
       {
       case 1:
        head=insert(head);
        break;
       case 2:
        head=insert_pos(head);
        break;
        case 3:
        display(head);
        break;
        case 4:
        exit(0);
        break;

        default:
            printf("invalid option \n");
       }
   }
    return 0;
}

node getnode ()
 {
     node new1;
     new1=(node) malloc(sizeof (struct mxn));
     new1->next=NULL;
     printf("enter row\n");
     scanf("%d",&new1->r);
     printf("enter column\n");
     scanf("%d",&new1->c);

     int i,j;
    for(i=0;i<new1->r;i++)
    {
        printf("%d row\n",i+1);
        for(j=0;j<new1->c;j++)
        {
            scanf("%d",&new1->a[i][j]);
        }
        printf("\n");
    }

     return new1;
 }
  node insert(node head)
 {
     node cur=head;
     node new1=getnode();
     if(head==NULL)
     return new1;
     while(cur->next!=NULL)
     {
         cur=cur->next;
     }
     cur->next=new1;
     new1->next=NULL;
     return head;
 }
 node insert_pos(node head)
 {
     int i,p=0,count=0;
     node cur=head;
     printf("enter the pos :\n");
     scanf("%d",&p);
      while(cur!=NULL){
         count++;
         cur=cur->next;}
         cur=head;
     if(p==1)
     {
         node cur=head;
         node new1=getnode();
     if(head==NULL)
            return new1;
     node temp;
     temp=head;
     head=new1;
     new1->next=temp->next;
     return head;
     }
       if(p==count)
     {
          node cur=head;
         while(cur->next!=NULL)
     {
         cur=cur->next;
     }
         node new1=getnode();
     if(head==NULL)
            return new1;
     cur->next=new1;
     new1->next=NULL;
     return head;
     }
printf("%d",count);
  cur=head;
     node new1=getnode();
     if(head==NULL)
     return new1;
     for(i=1;i<p;i++)
         {cur=cur->next;}
         node temp=cur->next;
     new1=cur->next;
     temp=new1->next;
     return head;
 }
 void display(node head)
{
    node cur;
    if(head==NULL)
    {

    printf("list is empty\n");
    return head;
    }

    else
    {
        int count=0;
        cur=head;
         while(cur!=NULL)
            {
               count++;
         cur=cur->next;
         }
         cur=head;
        printf("your data in the list is:\n ");
        while(cur!=NULL)
        {
             int i,j;
             printf("the elements of node %d are\n",count);
    for(i=0;i<cur->r;i++)
    {
        printf("row %d \t",i+1);
        for(j=0;j<cur->c;j++)
        {
            printf("%d\t",cur->a[i][j]);
        }
        printf("\n");
    }
    cur=cur->next;
        }
    }
}
