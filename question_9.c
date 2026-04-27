#include<stdio.h>
int findPeak(int a[],int l,int h){ 
if(l==h){ //jodi ekta element thaake 
 return a[l];//oitaai peak
}
else{
 int m=l+(h-l)/2;//mid ber kortesi
if(a[m]<a[m+1]){//jodi mid er cheye right side boro hoy
return findPeak(a,m+1,h);//taahole rihjt side e peak khujbo
}
else{
 return findPeak(a,l,m);// naaile left side e peak khujbo
}
}
}
int main(){
    int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
 scanf("%d",&a[i]);
}
printf("%d",findPeak(a,0,n-1));//function call kore peak print korbo
return 0;
}


