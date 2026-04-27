#include<stdio.h>
int count(int n){
 if(n<10) return 1;//jodi songkha ek digit-er hoy 10 er niche,taaile 1 return korbe
else
    return 1 + count(n / 10);//1 jog korbo aar songkha ke 10 diye bhaag kore ekta digit komabo
}
int main(){
    int n;
     printf("Enter number:");
    scanf("%d",&n);
    printf("Digits=%d",count(n));
    return 0;
}
