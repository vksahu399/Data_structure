# include<stdio.h>
# include<stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
struct stack *top= NULL;

int push (int );
int pop();
int peek();
int traverse();
int main()
{
    int ch,ele;
    while(1)
    {
        printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*MENU*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
        printf("1. Push :\n");
        printf("2. Pop :\n");
        printf("3. Peek :\n");
        printf("4. Traverse :\n");
        printf("5. Quite : \n");
        printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*MENU*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
        printf("Enter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter the element to insert\n");
                    scanf("%d",&ele);
                    push(ele);
                    break;
            case 2: pop();
                    break;
            case 3: peek();
                    break;
            case 4: traverse();
                    break;
            case 5: exit(0); 
            default:printf("Invalid input\n");
        }
    }
}
int push(int ele)
{
    struct stack *STACK=(struct stack*)malloc(sizeof(struct stack));
    STACK->data=ele;
    STACK->next=top;
    top=STACK;
}
int pop()
{
    if(top==NULL)
    {
        printf("Underflow !!\n");
    }else
    {
        struct stack *temp;
        temp=top;
        top=top->next;
        printf("Poped element is : %d\n",temp->data);
        free(temp);
    }
}
int peek()
{
    if(top==NULL)
    {
        printf("Underflow !!\n");
    }else
    {
        struct stack *temp;
        temp=top;
        printf("Poped element is : %d\n",temp->data);
    }
}
int traverse()
{
    struct stack *temp;
    temp=top;
    printf("Present element in stack :\n");
    while(temp!=NULL)
    {
        printf(" %d\n",temp->data);
        temp=temp->next;
    }
}














