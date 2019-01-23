# include<stdio.h>
# include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* root= NULL;
int len;
int append(int);
void Delete();
int lenth();
void display();
void in_at_first();
int main()
{
    int ch,d;
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
            case 1: printf("\nEnter the element to insert :");
                    scanf("%d",&d);
                    append(d);
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
int append(int d)
{
    struct node* p;
    struct node* q;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=d;
    p->right=NULL;
    p->left=NULL;
    if(root==NULL)
    {
        root=p;
    }else
    {
        q=root;
        while(q->right!=NULL)
        {
            q=q->right;
        }
        p->left=q;
        q->right=p;
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
        p=p->right;
    }
    return count;
}
void display()
{
    struct node* p;
    p=root;
    printf("\nElements is :");
    while(p!=NULL)
    {
        printf("%d-->,",p->data);
        p=p->right;
    }
}
void Delete()
{
    int loc,i=1,a;
    struct node* temp=root;
    struct node* q;
    printf("Enter the location to delete :");
    scanf("%d",&loc);
    a=lenth();
    if(loc==1)
    {
        root=root->right;
        root->left=NULL;
        free(temp);
    }else if(a==loc)
    {
        q=root;
        while(q->right!=NULL)
        {
            q=q->right;
        }
        q->left->right=NULL;
    }else
    {
        while(i<loc-1)
        {
            temp=temp->right;
            i++;
        }
        q=temp->right;
        q->right->left=temp;
        temp->right=q->right;
        q->left=NULL;
        q->right=NULL;
    }        
}
void in_at_first()
{

}