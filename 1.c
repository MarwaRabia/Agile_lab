#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void menu();
void display_options();
void Create_new_account();
struct acc_type
{
     char full_name[20];
     char full_address[20];
     int age;
     long National_ID;
    //  int acc_number;
     char acc_holder_address[100];
     float available_balance;     
};
struct acc_type account[20];

int main()
{
    int a,option;
    
    // while (1)
    // {
        printf("Enter 1 for Admine window \n");
        printf("Enter 2 for Client window\n");
        scanf("%d",&a);

        switch(a)
        {
        case 1:
            // printf("Enter Username \n");
            // printf("Enter Password\n");
            display_options();
            printf("Please enter any options (1/2/3) ");
            printf("to continue : ");
            scanf("%d",&option);
            if (option==1)
            Create_new_account();
            
            break;
        case 2:

            system("cls");
            printf("Two\n\n");

            break;


        case 3:
            system("cls");
            printf("Three\n\n");

            break;


        default :
            exit(0);
            break;

        }
    }


// }

void display_options()
{
    printf("\n1. Create new account \n");
    printf("2. Open Existing Account \n");
    printf("3. Exit System \n");
}


/* Function to create new account */
void Create_new_account()
{

   char bank_name[20];
   char full_address[20];
   int age ;
//    int acc_number;
   long National_ID;
   char acc_holder_address[100];
   float available_balance = 0;
   fflush(stdin); 

   printf("\nEnter the Full name  : ");
   scanf("%s", &bank_name);
   printf("\nEnter the Full address : ");
   scanf("%s", &full_address);
   printf("\nEnter the Age  : ");
   scanf("%d", &age);
   printf("\nEnter the National ID : ");
   scanf("%d", &National_ID);
   printf("\nEnter the account holder address : ");
   scanf("%s", &acc_holder_address);


   strcpy(account[National_ID].full_name,bank_name);
   strcpy(account[National_ID].full_address,full_address);
//    strcpy(account[acc_number-1].acc_holder_name,acc_holder_name);

   account[National_ID].National_ID=National_ID;
   strcpy(account[National_ID].acc_holder_address,
   acc_holder_address);
   account[National_ID].available_balance=available_balance;

   printf("\nAccount has been created successfully \n\n");
   printf("Bank name              : %s \n" , 
   account[National_ID].full_name);
   printf("Bank branch            : %s \n" , 
   account[National_ID].full_address);
   printf("Account holder name    : %s \n" , 
   account[National_ID].age);
   printf("Account number         : %d \n" , 
   account[National_ID].National_ID);
   printf("Account holder address : %s \n" , 
   account[National_ID].acc_holder_address);
   printf("Available balance      : %f \n" , 
   account[National_ID].available_balance);
 
   //num_acc++;
 
}





