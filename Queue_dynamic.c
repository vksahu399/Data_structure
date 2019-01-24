# include<stdio.h>
# include<stdlib.h>
struct Queue
{
    int data;
    struct Queue* next;
};
struct Queue* front= NULL;
struct Queue* rear=NULL;
int len;
void enQueue();
void DeQueue();
int lenth();
void display();
int main()
{
    int ch;
    while(1)
    {
        printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*MENU*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
        printf("1. EnQueue :\n");
        printf("2. DeQueue :\n");
        printf("3. Lenth :\n");
        printf("4. Display :\n");
        printf("5. Quite : \n");
        printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*MENU*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
        printf("\nEnter the choice :");
        scanf("%d",&ch);
        switch(ch)          
        {
            case 1: enQueue();
                    break;
            case 2: DeQueue();
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

void enQueue()
{
    int ele;
    printf("Enter the Element :");
    scanf("%d",&ele);
    struct Queue* temp=(struct Queue*)malloc(sizeof(struct Queue));
    temp->data=ele;
    temp->next=NULL;
    if(rear==NULL)
    {
        front=temp;
        rear=temp;
    }else
    {
        rear->next=temp;
        rear=temp;
    }
}

int lenth()
{
    int count=0;
    struct Queue* temp=front;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
}

void display()
{
    struct Queue* temp=front;
    printf("Elements is/are :");
    while(temp!=NULL)
    {
        printf("%d-->",temp->data);
        temp=temp->next;
    }    
}

void DeQueue()
{
    struct Queue* temp;
    if(front==NULL)
    {
        printf("UNDERFLOW!!!");
    }else
    {
        temp=front;
        front=front->next;
        free(temp);
    }
}
