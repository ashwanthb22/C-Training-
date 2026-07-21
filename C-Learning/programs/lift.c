#include<stdio.h>
int main()
{
    printf("******************************\n");
    printf("*******      LIFT      *******\n");
    printf("******************************\n");

    printf("Enter Lift Info\n");

    printf("Enter the NO Of Floors\n");
    int t_floor;
    scanf("%d",&t_floor);
   
    printf("Enter LEAST and MAX FLoor\n");
    int f,l;
    scanf("%d %d",&f,&l);
    
    printf("Enter the MAximum Load\n");
    int max_w;
    scanf("%d",&max_w);
    
    int option_state;
    int waiting_floor;
    int current_position=0;
    int person_dir = 0;
    int lift_dir = -1;

    while(1)
    {

        printf("Enter option_state:\n1.IN\n2.OUT\n");
        scanf("%d",&option_state);
        
        if(option_state==1)
        {
            printf("Current floor : %d\n",current_position);

            printf("1.UP\n2.DOWN\n");
            scanf("%d",&person_dir);

        }
        else
        {
            printf("Enter Waiting Floor:\n");
            scanf("%d",&waiting_floor);
        
            
            printf("Current Postion : %d\n",current_position);

            printf("Enter direction:\n1.UP\n2.DOWN\n");
            scanf("%d",&person_dir);
            
            while(current_position!=waiting_floor)
            {
                printf("CURRENT FLOOR : %d\n",current_position);
                if(lift_dir==-1)
                {
                    if(current_position > waiting_floor)
                    {
                        printf("***Coming down***\n");
                        current_position--;
                    }
                    else
                    {
                        printf("***Coming up***\n");
                        current_position++;
                    }
                }
            }
            if(waiting_floor==current_position)
            {
                printf("CURRENT FLOOR : %d\n",current_position);
                printf("OPENING / CLOSING\n");
            }
        }
    }
}