#include <stdio.h>
int firstOccurrence(int arr[], int low, int high, int target, int result) {
if (low > high)
return result;
int mid =(low+high)/2;
if (arr[mid]==target) {
result=mid; // Target paailam, kintu left side aro check korbo
 return firstOccurrence(arr,low,mid -1,target,result);
}
else if (arr[mid] > target) {
return firstOccurrence(arr,low,mid -1,target,result);
    }
else {
return firstOccurrence(arr, mid + 1, high, target, result);
}
}
int main() {
int n, target;
scanf("%d", &n);
int a[n];
for (int i =0;i<n;i++)
 scanf("%d",&a[i]);
scanf("%d",&target);
 int index=firstOccurrence(a,0,n-1,target,-1);
printf("%d\n",index);
return 0;
}
