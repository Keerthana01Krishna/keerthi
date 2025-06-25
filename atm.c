// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int pin=1234,entered_pin,ch;
    int new_pin;
    float amt,bal=500;
    printf("1.deposit \n2.withdrawal \n3.balance check \n4.pin change\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("enter your pin");
        scanf("%d",&entered_pin);
        if(pin==entered_pin)
        {
            printf("enter amt\n");
            scanf("%f",&amt);
            if(amt>0)
            {
                bal=bal+amt;
                printf("your amount deposited succesfully\n");
            }
            else
            {
                printf("check entered amount value\n");
            }
        }
        else
        {
            printf("invalid pin\n");
        }
        break;
        case 2: printf("enter your pin");
        scanf("%d",&entered_pin);
         if(pin==entered_pin)
        {
            printf("enter amt\n");
            scanf("%f",&amt);
            if(amt>0)
            {
                bal=bal-amt;
                printf("your amount deposited succesfully\n");
            }
            else
            {
                printf("check entered amount value\n");
            }
        }
        else
        {
            printf("invalid pin\n");
        }
        break;
        case 3:
        printf("enter your pin");
        scanf("%d",&entered_pin);
        if(pin==entered_pin)
         {
            printf("The balance amount is %.2f", +bal); 
         }
         else
         {
             printf("balance amount is invalid");
         }
         break;
         case 4:
          printf("enter your pin");
        scanf("%d",&entered_pin);
        if(pin==entered_pin)
        {
        printf("enter your new_pin");
        scanf("%d",&new_pin);
        if(new_pin==pin)
        {
            printf("Do you want to keep the oldpin as newpin 1.yes \n 2.no \n");
            int ch1;
            scanf("%d",&ch1);
            if(ch1==1)
            {
                printf("pin is updated");
            }
            else if(ch1==2)
            {
                printf("Enter Your New Pin\n");
               scanf("%d",&new_pin);
               pin=new_pin;
               printf("new pin is updated");
            }
      
            
        }
        printf("Your New Pin is updated");
        break;
         
    }
        
    return 0;
}
}