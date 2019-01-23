# include<stdio.h>
# include<stdlib.h>
struct node
{
    int data;
    struct node* front;
    struct node* rear;
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
