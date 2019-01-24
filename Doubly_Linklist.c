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
void del_at_first();
void del_at_spe();
void del_at_last();
int lenth();
void display();
void in_at_first();
void in_at_last();
void in_at_spe();
int main()
{
    int ch,d;
    while(1)
    {
        printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*MENU*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
        printf("1. Insert at beginning :\n");
        printf("2. Insert at specified location :\n");
        printf("3. Insert at last :\n");
        printf("4. Delete at beginning :\n");
        printf("5. Delete at specified location :\n");
        printf("6. Delete at last :\n");
        printf("7. Lenth :\n");
        printf("8. Display :\n");
        printf("9. Quite : \n");
        printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*MENU*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
        printf("\nEnter the choice :");
        scanf("%d",&ch);
        switch(ch)          
        {
            case 1: in_at_first();
                    break;
            case 2: in_at_spe();
                    break;
            case 3: in_at_last();
                    break;               
            case 4: del_at_first();
                    break;
            case 5: del_at_spe();
                    break;
            case 6: del_at_last();
                    break;               
            case 7: len=lenth();
                    printf("\nLenth of linklist is -->: %d \n",len);
                    break;
            case 8: display();
                    break;
            case 9: exit(0); 
            default:printf("\nInvalid input\n");
        }
    }
}
void in_at_first()
{
    int ele;
    printf("Enter the element :");
    scanf("%d",&ele);
    struct node* p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=ele;
    p->left=NULL;
    p->right=NULL;
    if(root==NULL)
    {
        root=p;
    }else
    {
        struct node* temp=root;
        temp->left=p;
        p->right=temp;
        root=p;
    }
}

void in_at_last()
{
    int ele;
    printf("Enter the element :");
    scanf("%d",&ele);
    struct node* temp;
    struct node* p=root;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=ele;
    temp->right=NULL;
    while(p->right!=NULL)
    {
        p=p->right;
    }
    p->right=temp;
    temp->left=p;
}

void in_at_spe()
{
    int ele,loc,i=1;
    printf("Enter the location");
    scanf("%d",&loc);
    printf("Enter the element :");
    scanf("%d",&ele);
    struct node* temp;
    struct node* p=root;
    struct node* q;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=ele;
    temp->left=NULL;
    temp->right=NULL;
    while(i<loc-1)
    {
        p=p->right;
        i++;
    }
    q=p->right;
    p->right=temp;
    q->left=temp;
    temp->left=p;
    temp->right=q;
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

void del_at_first()
{
    struct node* temp=root;
    root=temp->right;
    root->left=NULL;
    free(temp);
}

void del_at_last()
{
    struct node* temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    temp->left->right=NULL;
}

void del_at_spe()
{
    int loc,i=1;
    printf("Enter the location :");
    scanf("%d",&loc);
    struct node* temp=root;
    struct node* p;
    while(i<loc)
    {
        temp=temp->right;
        i++;
    }
    temp->left->right=temp->right;
    temp->right->left=temp->left;
}
