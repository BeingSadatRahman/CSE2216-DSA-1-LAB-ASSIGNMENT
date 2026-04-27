#include<stdio.h>
int sumDigits(int n){
if(n==0) return 0;
else return n%10+sumDigits(n/10);
}
int digroot(int n){
    if(n<10)
return n;
else
return digroot(sumDigits(n));
}
int main(){
int n;
scanf("%d",&n);
printf("%d\n",digroot(n));
return 0;
}
