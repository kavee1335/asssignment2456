//program to calculate electricity bill
#include<stdio.h>
int main(){
//allow the user to enter variables
int customerID;
char customername;
float unitconsumed,bill,surecharge,totalbillpaid;

printf("enter customerID");
scanf("%d",&customerID);

printf("enter customername");
scanf("%s",&customername);

printf("enter unitconsumed");
scanf("%f",&unitconsumed);

if(unitconsumed <= 199){
bill = unitconsumed*1.20;
printf("your charge is Ksh%.2f\n" ,bill);
}

else if(unitconsumed >= 200 && unitconsumed < 400){
bill=unitconsumed*1.50;
printf("your charge is Ksh%.2f\n" ,bill);
}

else if(unitconsumed >= 400 && unitconsumed < 600){
bill=unitconsumed*1.8;
printf("your charge is Ksh%.2f\n" ,bill);
}

else if(unitconsumed >= 600){
bill = unitconsumed*2.00;
printf("your charge is Ksh%.2f\n",bill);
}
if(bill > 400){
surecharge = bill * 15/100;
printf("your surecharge is Ksh%f.2\n", surecharge);
}
else if(bill >= 100)
{
printf("you are good %f\n");
}
totalbillpaid=bill+surecharge;

printf("totalbillpaid%f\n",totalbillpaid);
printf("customerID%d\n", customerID);
printf("customername%c\n",customername);
printf("unitsconsumed%f",unitconsumed);

return 0;
} 