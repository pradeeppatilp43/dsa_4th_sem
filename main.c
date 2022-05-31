#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


typedef struct dll
{
    char s[100];
    struct dll *next;
    struct dll *prev;
}  *node;
 node insert(node head);
node getnode ();
 node del_q(node head);
 void display(node head);


int main()
{

   node head =NULL;
   int N,Q;
       scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
      head=insert(head);
    }

       scanf("%d",&Q);
    for(int j=0;j<Q;j++)
    {
      head=del_q(head);
    }

      display(head);
    return 0;
}

node getnode ()
 {
     node new1;
     new1=(node) malloc(sizeof (struct dll));
     new1->next=NULL;
     new1->prev=NULL;
     scanf("%s",new1->s);
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
 node del_q(node head)
 {
    char q[100];
     scanf("%s",q);
     node cur=head;
     while(cur!=NULL)
     {
         int flag=0;
         if(strcmp(q,cur->s)==0)
         {
             flag=1;
              if(cur->prev==NULL)
             {
                  node temp = cur;
                 cur=cur->next;
                 head=cur;
                 temp->next=NULL;
                 cur->prev=NULL;
                 free (temp);
             }
                if(cur->prev==NULL&&cur->next==NULL&&(strcmp(q,cur->s)==0))
             {
                head=NULL;
                return head;
             }
              if(cur->prev==NULL&&cur->next==NULL&&(strcmp(q,cur->s)!=0))
             {
                return head;
             }

              if(cur->next==NULL)
             {
                 node temp = cur;
                 cur=cur->prev;
                 temp->prev=NULL;
                 cur->next=NULL;
                 free(temp);
                  return head;
             }


             if(cur->next!=NULL&&cur->prev!=NULL)
             {
                 node temp = cur;
                 cur=cur->prev;
                 cur->next=temp->next;
                 node x= cur->next;
                 x->prev=cur;
                 x=temp;
                 cur=cur->next;
                 temp->prev=NULL;
                 temp->next=NULL;
                free (temp);
                free(x);
             }

         }


     if(flag==0){
             cur=cur->next;
     }
     }
     return head;
 }
 void display(node head)
{
    node cur;
    if(head==NULL)
    {
        printf("The List Is Empty\n");
    exit(0);}
    else
    {
        cur=head;
        while(cur!=NULL)
        {
            printf("%s ",cur->s);
            cur=cur->next;
        }
    }
}
