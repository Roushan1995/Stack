#include<stdio.h>
#define MAX_SIZE 5

struct Stack
{
    int stk[MAX_SIZE];
    int top;
}st;

void push(int);
void pop();
void display();

int main()
{
    int choice,value,found;
    st.top=-1;
    while(choice!=4)
    {
        printf("\nWhat do you want to do in Stack\n\n");
        printf("1.  Push\n2.  Pop\n3.  Display\n4.  Exit\n\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("\nEnter value you want to Push\n");
                   scanf("%d",&value);
                   push(value);
                   break;
            case 2:pop();
                   break;
            case 3:printf("\nElements in Stack are\n\n");
                   display();
                   break;
            case 4:break;
            default:break;
        }
    }
    return 0;
}

void push(int value)
{
    if(st.top==(MAX_SIZE-1))
    {
        printf("\nStack is Full\n");
    }
    else
    {
        ++st.top;
        st.stk[st.top]=value;
        printf("The value %d is inserted at index %d",value,st.top);
    }
}

void pop()
{
    int value;
    if(st.top==-1)
    {
       printf("\nStack is Empty\n");
    }
    else
    {
        value=st.stk[st.top];
        printf("Popped out element is %d",value);
        --st.top;
    }
}

void display()
{
    int i;
    if(st.top==-1)
    {
        printf("\nStack is Empty\n");
    }
    else
    {
     for(i=0;i<=st.top;i++)
     {
         printf("%d\t\t",st.stk[i]);
     }
    }
}
