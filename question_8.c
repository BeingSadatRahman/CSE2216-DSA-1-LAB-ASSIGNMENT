#include<stdio.h>
int main(){
    int n;
int target,i;
int steps=0,found=-1;
 scanf("%d",&n);
int a[n];
for(i=0;i<n;i++) scanf("%d",&a[i]);
scanf("%d",&target);
int l=0,h=n-1;//low and hifh  initialize korlam
while(l<=h){//binary search loop start hoilo
 steps++;//protibaar loop er step increment
int m=(l+h)/2;//mid er je index oitar calculation
if(a[m]==target){
 found=m;
break;
 }
else if(a[m]<target){
 l=m+1;
 }
else{
 h=m-1;
}
}
if(found!=-1) printf("%d\n",found);
else printf("-1\n");
printf("%d\n",steps);
return 0;
}
