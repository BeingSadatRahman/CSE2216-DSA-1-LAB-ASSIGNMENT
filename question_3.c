#include<stdio.h>
int binarySearch(int arr[],int left,int right,int target){
    if(left>right) return-1;
    int mid=(left+right)/2;
    if(arr[mid]==target)
        return mid;
        else if(target<arr[mid])
return binarySearch(arr,left,mid-1,target);
    else
        return binarySearch(arr,mid+1,right,target);}
int main(){
    int n,i,target;
printf("enter size:");
scanf("%d",&n);
int arr[n];
printf("enter sorted arrat:");
for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
printf("enter target:");
scanf("%d",&target);
int result=binarySearch(arr,0,n-1,target);
if(result==-1)
printf("not found");
else
printf("position=%d",result);
return 0;

}
