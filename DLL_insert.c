#include <stdio.h>
#include <stdlib.h>

typedef struct dll
{
    int n;
    struct dll *next;
    struct dll *prev;
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
     new1=(node) malloc(sizeof (struct dll));
     new1->next=NULL;
     new1->prev=NULL;
     printf("enter n\n");
     scanf("%d",&new1->n);
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
     new1->prev=cur;
     new1->next=NULL;
     return head;
 }
 node insert_pos(node head)
 {
     int i,p;
     printf("enter the pos :\n");
     scanf("%d",&p);
     if(p==1)
     {
         node cur=head;
         node new1=getnode();
     if(head==NULL)
            return new1;
     new1->next=head;
     head->prev=new1;
     head=new1;
     return head;
     }
     node cur=head;
     node new1=getnode();
     if(head==NULL)
     return new1;
     for(i=1;i<p-1;i++)
         {cur=cur->next;}
     new1->next=cur->next;
     cur->next=new1;
     new1->prev=cur;
     cur=new1->next;
     cur->prev=new1;
     return head;
 }
 void display(node head)
{
    node cur;
    if(head==NULL)
    printf("list is empty\n");
    else
    {
        cur=head;
        printf("your data in the list is:\n ");
        while(cur!=NULL)
        {
            printf("%d\n",cur->n);
            cur=cur->next;
        }
    }
}
