#include<stdio.h>
int isSorted(int arr[],int n){
if(n<=1) return 1;
if (arr[0]>arr[1]) return 0;
return isSorted(arr+1,n-1);
}
int main(){
 int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
if(isSorted(a,n))
printf("true\n");
    else printf("false\n");
    return 0;
}
}

