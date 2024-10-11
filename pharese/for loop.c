//for loo-put numbers20-80

#include<stdio.h>
int main(){
//allow the user to enter variables
int i;
int sum;
int square ;

for(i=20;i<=80;i++){
printf("%d\n",i);

sum = sum + i;
printf("the sum is%d\n",sum);

square = i*i;
printf("the square is%d\n",square);

}
return 0;
}