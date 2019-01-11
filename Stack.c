# include<stdio.h>
# include<stdlib.h>   // Use only for exit function
# define CAPACITY 5   // Micro for size of stack 
int stack[CAPACITY],top=-1;
void push (int );       //Use for insert element into the stack
int pop();              //Use for delete element from stack
int peek();             //Similar to pop function but not exact
int traverse();         //Display all element present in stack

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
void push(int ele)
{
    if(top==CAPACITY-1)    //Check if stack is full or not 
    {
        printf("Overflow !!\n");
    }else
    {
        top++;
        stack[top]=ele;
    }
}
int pop()
{
    int e;
    if(top==-1)     //Check if any element present in stack or not
    {
        printf("Underflow !!\n");
    }else
    {
        e=stack[top];
        printf("Poped element is : %d\n",e);
        top--;
    }
}
int peek()
{
    int e;
    if(top==-1)
    {
        printf("Underflow !!\n");
    }else
    {
        e=stack[top];
        printf("Poped element is : %d\n",e);
    }
    return top;
}
int traverse()
{
    int i;
    printf("Present element in stack :\n");
    for(i=top;i>=0;i--)
    {
        printf(" %d\n",stack[i]);
    }
}

