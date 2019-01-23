# include<stdio.h>
# include<stdlib.h>
struct node
{
    int data;
    struct node* link ;
};
struct node* root= NULL;
int len;
void append();
void Delete();
int lenth();
void display();
int main()
{
    int ch;
    while(1)
    {
        printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*MENU*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
        printf("1. Append :\n");
        printf("2. Delete :\n");
        printf("3. Lenth :\n");
        printf("4. Display :\n");
        printf("5. Quite : \n");
        printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*MENU*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
        printf("\nEnter the choice :");
        scanf("%d",&ch);
        switch(ch)          
        {
            case 1: append();
                    break;
            case 2: Delete();
                    break;
            case 3: len=lenth();
                    printf("\nLenth of linklist is -->: %d \n",len);
                    break;
            case 4: display();
                    break;
            case 5: exit(0); 
            default:printf("\nInvalid input\n");
        }
    }
}
void append()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the element :");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node* p;
        p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;     
    }
}
int lenth()
{
    int count=0;
    struct node* p;
    p=root;
    while(p!=NULL)
    {
        count++;
        p=p->link;
    }
    return count;
}
void display()
{
    struct node* temp;
    temp=root;
    if(temp==NULL)
    {
        printf("\nLinklist is Empty\n");
    }
    else
    {
        printf("\nPresent Data in Linklist are :");
        while(temp!=NULL)
        {
            printf("%d-->, ",temp->data);
            temp=temp->link;
        }
    }
}
void Delete()
{
    int flag=0,d,i=1;
    struct node* p;
    struct node* q;
    printf("\nEnter the location to delete :");
    scanf("%d",&d);
    if(d>lenth())
    {
        printf("\nLocation not present");
    }else if(d==1)
    {
        p=root;
        root=p->link;
        p->link=NULL;
        printf("%d Element deleted sucessfully",p->data);
        free(p);
    }else
    {
        p=root;
        while(i<(d-1))
        {
            p=p->link;
            i++;
        }
        q=p->link;
        p->link=q->link;
        q->link=NULL;
        printf("%dth Element deleted sucessfully",d);
        free(q);
    }
}