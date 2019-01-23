# include<stdio.h>
# include<stdlib.h>
# define CAPACITY 5
int Queue[CAPACITY],rear=0,front=0;

void push (int );
int pop();
int traverse();

int main()
{
    int ch,ele;
    while(1)
    {
        printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*MENU*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
        printf("1. Push :\n");
        printf("2. Pop :\n");
        printf("3. Traverse :\n");
        printf("4. Quite : \n");
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
            case 3: traverse();
                    break;
            case 4: exit(0); 
            default:printf("Invalid input\n");
        }
    }
}

void push(int ele)
{
    if(rear==CAPACITY-1)
    {
        printf("!!! OVERFLOW !!!");
    }else
    {
        Queue[rear]=ele;
        rear++;
    }
}

int pop()
{
    int c;
    if(rear==0)
    {
        printf("!!! UNDERFLOW !!!");
    }else
    {
        printf("1. DELETE at front");
        printf("2. DELETE at end");
        scanf("%d",&c);
        switch(c)
        {
            case 1: printf("DELETE element is %d",Queue[front]);
                    front++;
                    break;
            case 2: printf("DELETE element is %d",Queue[rear]);
                    rear--;
                    break;        
        }
    }
}

int traverse()
{
    int i=front;
    printf("Element is :");
    for(i;i<=rear;i++)
    {
        printf("%d",Queue[i]);
    }
}