#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
char choice;
float x ,handwash=70 ,nocilla=450 ,shampoo=220 ,biscuits=50 ,eggs=90 ,noodles=250 ,vegetables=50 ,oil=310 ,salt=120 ,total1=0 ,total2=0 ,total3=0 ,total4=0 ,total5=0 ,total6=0 ,total7=0 ,total8=0 ,total9=0 ,Total;


printf("           WELCOME TO OUR PROJECT HOUSE.\n");

printf("        World's Hygenic Departmental Store.\n\n");

printf("Please enter your choice...\n\n");
printf("Vat 3 percent. \n\n");

printf("[1] for Hand Wash.\n [you will get 1 LUX soap]\n");
printf("[2] for Nocilla.\n");
printf("[3] for Shampoo.\n");
printf("[4] for Biscuits.\n");
printf("[5] for 1 dozen eggs.\n");
printf("[6] for Noodles(packet).\n [you will get one extra packet]\n");
printf("[7] for Vegetables.\n");
printf("[8] for Oil(5kg).\n");
printf("[9] for 1 kg Salt bag.\n [you will get 5tk discount.]\n");

printf("[s] to quit shoping.\n");

choice=getch();

if((choice=='s')||(choice=='S'))
exit(0);

if((choice=='1')||(choice=='2')||(choice=='3')||(choice=='4')||(choice=='5')||(choice=='6')||(choice=='7')||(choice=='8')||(choice=='9'))
{
    printf("Things are available.\n");
}
else
{
    printf("Not available.\n");
}
if(choice=='1')
{
printf("shopped:Hand Wash\n",handwash);
printf("How many handwashes you want?\n",x);
scanf("%f",&x);
total1=(handwash*x)+(handwash*x*3/100);
printf("Sub total:Handwash=%f\n",total1);
getch();
}

if(choice=='2')
{
printf("Shopped:Nocilla=250\n",nocilla);
printf("How many?\n",x);
scanf("%f",&x);
total2=(nocilla*x)+(nocilla*x*3/100);
printf("Sub total:Nocilla=%f\n",total2);
getch();
}

if(choice=='3')
{
printf("shopped:Sampoo\n",shampoo);
printf("How many?\n",x);
scanf("%f",&x);
total3=(shampoo*x)+(shampoo*x*3/100);
printf("Sub total:Shampoo=%f\n",total3);
getch();
}

if(choice=='4')
{
printf("Shopped:Biscuits\n",biscuits);
printf("How many?\n",x);
scanf("%f",&x);
total4=(biscuits*x)+(biscuits*x*3/100);
printf("Sub total:Biscuits=%f\n",total4);
getch();
}

if(choice=='5')
{
printf("shopped:Dozen eggs\n",shampoo);
printf("How many dozens you want?\n",x);
scanf("%f",&x);
total5=(eggs*x)+(eggs*x*3/100);
printf("Sub total:Eggs=%f\n",total5);
getch();
}

if(choice=='6')
{
printf("shopped:packet Noodles\n",noodles);
printf("How many packets you want?\n",x);
scanf("%f",&x);
total6=((noodles*x)+x)+(noodles*x*3/100);
printf("Sub total:Noodles=%f\n",total6);
getch();
}

if(choice=='7')
{
printf("shopped:kg Vegetables\n",vegetables);
printf("How many kg you want?\n",x);
scanf("%f",&x);
total7=(vegetables*x)+(vegetables*x*3/100);
printf("Sub total:Vegetables=%f\n",total7);
getch();
}

if(choice=='8')
{
printf("shopped:5kg Oil\n",oil);
printf("How many oils you want?\n",x);
scanf("%f",&x);
total8=(oil*x)+(oil*x*3/100);
printf("Sub total:Oil=%f\n",total8);
getch();
}

if(choice=='9')
{
printf("shopped:1 kg Salt bag=120TK (It has 5TK discount)\n",salt);
printf("how many?\n",x);
scanf("%f",&x);
total9=((salt*x)-(5*x))+(salt*x*3/100);
printf("Sub total\n:Salt=%f\n",total9);
getch();
}

}

