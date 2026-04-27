#include<stdio.h>
int power(int base,int exp){
    if(exp==0){ // jodi power zero hoy
        return 1;//taahole result 1 (karon x^0 = 1)
}
return base * power(base, exp - 1); // base ke gun korbo aar exp ek kore komabo
}
int main(){
int b,e;
printf("Enter base:");
scanf("%d",&b);
printf("Enter exp:");
scanf("%d",&e);
int result=power(b,e);
printf("Result:%d\n",result);
return 0;
}
