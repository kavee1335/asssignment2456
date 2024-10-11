//do while loop put numbers
#include<stdio.h>
int main(){


int start;
int stop;
int sum;

printf("enter start");
scanf("%d",&start);

printf("enter stop");
scanf("%d",&stop);


do{
printf("%d\n",start);

start++;
sum +=start;
}while(start<=stop);
printf("the sum is%d",sum);

return 0;
}