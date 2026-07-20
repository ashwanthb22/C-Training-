#include<stdio.h>
#include<stdlib.h>
int main()
{
    int add(int x,int y)
    {
        return x+y;
    }
    int sub(int x,int y)
    {
        return x-y;
    }
    int mul(int x,int y)
    {
        return x*y;
    }
    int div(int x,int y)
    {
        return x/y;
    }


    printf("*********  CALCULATOR  **********\n");
    while(1)
    {
        printf("Enter your option\n");
        printf("1. ADDITON\n");
        printf("2. SUBRACTION\n");
        printf("3. MULTIPLITON\n");
        printf("4. DIVITION\n");
        printf("5. EXIT\n");

        int choice;
        scanf("%d",&choice);

        if(choice == 5)
        break;


        if(choice >=1 && choice <=5)
        {

            printf("Enter two Numbers\n");
            int a,b;
            scanf("%d %d",&a,&b);
            
            switch(choice)
            {
                case 1:
                {
                    printf("%d\n",add(a,b));
                    break;
                }
                case 2:
                {
                    printf("%d\n",sub(a,b));
                    break;
                }
                case 3:
                {
                    printf("%d\n",mul(a,b));
                    break;
                }
                case 4:
                {
                    printf("%d\n",div(a,b));
                    break;
                }
                default:
                break;
            }
        }
        else
        {
            printf("Enter a valid option\n");
            continue;
        }
    }
    
}