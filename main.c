#include <stdio.h>
#include <stdlib.h>



void hotelmenu();
void yourorder();
void yourbill();
void totalnotes();

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
while(v){
         printf("\nEnter Customer amount : ");
        scanf("%d",&cusamt);
 
printf("\n");
 
 
if(cusamt > total)
{
   ret=cusamt-total;
   printf("Your return amount is : %d\n ",ret);
   printf("\n");
v=0;
totalnotes();
}
 
  else if(cusamt==total)
{
   printf("******THANKU******\n");
   printf("--Do visit Again--\n");
v=0;
}
 
else
{
 if(ret1){
        if(ret1 > cusamt){
   ret1 = ret1 - cusamt;
    printf("\nPlease pay more %d Rs\n",ret1);
}else if(ret1 < cusamt){
    ret1 = cusamt - ret1;
    printf("Your Return Amount is : %d\n",ret1);
    v=0;
ret1=ret;
totalnotes();
}
 
else
{
printf("******THANKU******\n");
printf("--Do visit Again--\n");
v=0;
}
 }else{
ret=total-cusamt;
ret1 = ret;
printf("\nPlease pay more %d Rs\n",ret);
 }
 
}
 
}
}

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

void totalnotes()
{
 
  total= ret/500;
total1=500*total;
if(total1!=0){
printf("500 Notes X %d = %d  \n",total,total1);
  }
 
ret= ret-(total*500);
total = ret/200;
total2=200*total;
if(total2!=0)
{
    printf("200 Notes X %d = %d  \n",total,total2);
}
 
ret= ret-(total*200);
total = ret/100;
total3=100*total;
if(total3!=0)
{printf("100 Notes X %d = %d  \n",total,total3);
}
 
ret= ret-(total*100);
total = ret/50;
total4=50*total;
if(total4!=0)
{
printf("50 Notes X %d = %d  \n",total,total4);
}
 
 
ret = ret -(total*50);
total = ret/20;
total5=20*total;
if(total5!=0)
{
printf("20 Notes X %d = %d  \n",total,total5);
}
 
 
ret = ret -(total*20);
total =ret/10;
total6=10*total;
if(total6!=0){
printf("10 Notes X %d = %d  \n",total,total6);
}
 
ret = ret -(total*10);
total =ret/5;
total7=5*total;
if(total7!=0){
printf("5 Notes X %d = %d  \n",total,total7);
}
 
ret = ret -(total*5);
total =ret/2;
total8=2*total;
if(total8!=0){
printf("2 Notes X %d = %d  \n",total,total8);
}
 
ret = ret -(total*2);
total =ret/1;
if(total9!=0){
total9=1*total;
printf("1 Notes X %d = %d  \n",total,total9);
 }
}



