#include <stdio.h>
#include <stdlib.h>
struct data{
   long id;
   int balance;
   char account_status[20];
};
struct data bank_data[3] = {
                            {1234567890,7500,"active"},
                            {1234567891,9000,"active"},
                            {1234567892,6000,"active"}
                        };


int main()

{
long client_id=1234567890;
int client_balance;
char client_status[20];
long transfer_id;
int money_amount;
int flag,i;

//make transaction
printf("Please, Enter the bank account ID you want to transfer money to: ");
scanf("%ld", &transfer_id);
printf("Please, Enter the amount of money to transfer : ");
scanf("%ld", &money_amount);

//check which account whose id = client_id & assign its balance and status
for (i=0;i<3;i++){
if (bank_data[i].id==client_id){
    client_balance=bank_data[i].balance;
    client_status[20]=bank_data[i].account_status;
}
}

for (i=0;i<3;i++){
//to check if transfer_id is valid & account is active
if ((bank_data[i].id==transfer_id)&&(bank_data[i].account_status=="active")){
flag=1;
printf(flag);
}
}

//check amount of money < balance ,give error if flag!=1(tranfer_id isn't valid or account not active),give error if client account isn't active
if (flag==1 && (money_amount<client_balance)&&client_status=="active" )
{
    printf("Done !");//balance=balance+Amount
}
else{
      printf(" please ,Enter a valid account id");

}

}
