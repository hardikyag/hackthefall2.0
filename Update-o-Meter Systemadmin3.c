#include<stdio.h>
#include<string.h>

int main(){

char status[50],itemavail[50];
int itemavailz;

printf("----Welcome to the Update-o-Meter System----");
printf("\n\nIs your shop available for providing service?");
scanf("%[^\n]%*c",status);

if(strcmp(status, "Yes") == 0 || strcmp(status, "YES") == 0 || strcmp(status, "yes") == 0 || strcmp(status, "Ha") == 0 || strcmp(status, "ha") == 0)
    {
    printf("Thank you for your status update. You will start receiving your order soon");
    printf("\n\n-----User requesting for item details-------\n");
    printf("\n\nThe user wants the following items: \n 1.Fortune Sunlite Refined Sunflower Oil: 5 Litres ");
    printf("\n 2.Maggi 2-Minute Masala Noodles : 560 gms\n");
    printf("\nAre both the items available?");
    scanf("%[^\n]%*c",itemavail);
    if(strcmp(itemavail,"Yes")==0){
        printf("\nThank you for the update. Sending the further information to the user.\n");
    }
    else if(strcmp(itemavail,"No")== 0){
            printf("\nOkay, so which item is available?");
            printf("\nFrom Shop Owner: Item 1 is available.\n");
            printf("\nThank you for the input.Sending in the the details to the user.\n");
            }
    }
else if(strcmp(status, "No") == 0 || strcmp(status, "NO") == 0 || strcmp(status, "no") == 0 || strcmp(status, "nahi") == 0 || strcmp(status, "Nahi") == 0)
    {
    printf("Thank you for your status update.");
    }
else
    {
    printf("Invalid Entry");
    }

return 2;
}
