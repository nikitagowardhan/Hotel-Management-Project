#include <stdio.h>
#include <stdlib.h>



void hotelmenu();
void yourorder();
void yourbill();

int n,plates,cups,cusamt,ret,ret1;
int i=1;
int samosa=20,dosa=30,tea=10,n1,n2,n3,tol1,tol2,tol3,total,total1,total2,total3,total4,total4,
total5,total6,total7,total8,total9,v=1;



int main(){

while(i)
{
yourorder();
printf("\n");
}
printf("******* T H A N K  Y O U ******** ");
return 0;
}



void hotelmenu()
{
printf("Welcome to Hotel Asterisc!\n");
printf("\n\n\n::::::::MENU:::::::\n");
printf("\n\n1.  DOSA : 20Rs\n");
printf("\n\n2.  SAMOSA : 35Rs\n");
printf("\n\n3.  TEA : 10Rs\n");
printf("\n\n0.  EXIT \n ");
}


void yourorder()
 {
    printf("\n");
    hotelmenu();

    printf("\nEnter Any one Choice :");
scanf("%d",&n);


switch(n)
{
case 1:
printf("How many plates :");
scanf("%d",&n1);
break;

case 2:
printf("How many plates:");
scanf("%d",&n2);
break;

case 3:
printf("How many Cups of Tea :");
scanf("%d",&n3);
break;

default:
printf("WRONG CHOICE\n");

case 0:

if(n==0)
{
  i=0;
}

}
printf(":::::EXIT:::::\n");
printf("\n");
yourbill();
 
}

void yourbill()
{
   printf(":::Your Bill:::");
   printf("\n");
 
    tol1=samosa*n1;
 
     tol2=dosa*n2;
 
 tol3=tea*n3;
 
     total=tol1+tol2+tol3;
 
     printf("---------------------------------------------------\n");
     printf("Sr.No |    Item   |   Qty    |   Rate  |  Sub Total\n");
     printf("---------------------------------------------------\n");
     if(tol1!=0)
     {
         printf("  1   |   Samosa  |   %d     |   20/-  |    %d/-    \n",n1,tol1);
     } if(tol2!=0)
     {
         printf("  2   |   Dosa    |   %d     |   30/-  |    %d/-     \n",n2,tol2);
     } if(tol3!=0)
     {
         printf("  3   |   Tea     |   %d     |   10/-  |    %d/-     \n",n3,tol3);
     }
     printf("---------------------------------------------------\n");
     printf("                        Grand Total :-      %d/-     \n",total);
     printf("---------------------------------------------------\n");
 
}





