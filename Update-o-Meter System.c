#include<stdio.h>

int main(){

int choice,ione,itwo;

printf("----Welcome to the Update-o-Meter System----");

printf("\n\n\n**Detecting Location**");
printf("\n\n\nLocation Detected: Sector 4,Nerul,Navi Mumbai\n\n");

printf(" The available shops near you are:\n1)Manoj Stores\n2)Palm Beach Store\n3)Fresh2home Stores\n4)Paras Stores\n\n");

printf("Please enter the store you want to check inventory for:");
scanf("%d",&choice);

switch(choice){

case 1:
    printf("\n1-Fortune Sunlite Refined Sunflower Oil: 5 Litres");
    printf("\n2-Parle Hide & Seek Chocolate Chip Cookies : 350 gms\n3-Premia Sugar : 5 kgs\n4-Maggi 2-Minute Masala Noodles : 560 gms\n");
    printf("\nEnter the item number you want to buy:");
    scanf("%d%d",&ione,&itwo);
    printf("\n----Contacting the shop-----\n");
    if(ione==3 && itwo==4)
        {
            printf("\nThe items are available.\n");
        }
    else{
        printf("\nSorry the items you want are unavailable right now.\n");
        }
    break;

case 2:
    printf("\n1-Gemini Refined Sunflower Oil : 5 Litres");
    printf("\n2-Karachi's Fruit Biscuits : 400 gms\n3-Premia Groundnut : 500 gms\n4-Maggi Masala Veg Atta Noodles: 290 gms\n");
    printf("\nEnter the item number you want to buy:");
    scanf("%d%d",&ione,&itwo);
    printf("\n----Contacting the shop-----\n");
    if(ione==1 && itwo==4)
        {
            printf("\nThe items are available.\n");
        }
    else{
        printf("\nSorry the items you want are unavailable right now.\n");
        }
    break;

case 3:
    printf("\n1-Sunrich Refined Sunflower Oil : 1 Litre");
    printf("\n2-Parle Hide & Seek Chocolate Chip Cookies : 350 gms\n3-Premia American Badam (Almonds) : 500 gms");
    printf("\n4-Sunfeast Yippee Magic Masala Noodles : 240 gms\n");
    printf("\nEnter the item number you want to buy:");
    scanf("%d%d",&ione,&itwo);
    printf("\n----Contacting the shop-----\n");
    if(ione==1 && itwo==3)
        {
            printf("\nThe items are available.\n");
        }
    else{
        printf("\nSorry the items you want are unavailable right now.\n");
        }
    break;

case 4:
    printf("\n1-Swaad Refined Sunflower Oil : 1 Litre");
    printf("\n2-Britannia Nice Time Coconut Biscuits : 150 gms\n3-Premia Cow Ghee Pouch : 1 Litre");
    printf("\n4-Ching's Schezwan Instant Noodles : 240 gms\n");
    printf("\nEnter the item number you want to buy:");
    scanf("%d%d",&ione,&itwo);
    printf("\n----Contacting the shop-----\n");
    if(ione==2 && itwo==3)
        {
            printf("\nThe items are available.\n");
        }
    else{
        printf("\nSorry the items you want are unavailable right now.\n");
        }
    break;

default:
    printf("\nInvalid Entry\n");
    break;
}

return 0;
}
