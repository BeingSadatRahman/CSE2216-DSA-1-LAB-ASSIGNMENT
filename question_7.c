#include <stdio.h>
int firstOccur(int a[],int l,int h,int t,int r){
if(l>h) return r;
int m = (l + h) / 2;//mid er index ber korlam
 if (a[m] == t)
{
    r = m; // Target paileo r-e index rakhi aar bame arektu khujtesi
    return firstOccur(a, l, m - 1, t, r);
}
else if(a[m]>t) return firstOccur(a,l,m-1,t,r);
else return firstOccur(a,m+1,h,t,r);
}
int lastOccur(int a[],int l,int h,int t,int r){
if(l>h) return r;
int m=(l+h)/2;
if(a[m]==t){r=m; return lastOccur(a,m+1,h,t,r);}
    else if(a[m]>t) return lastOccur(a,l,m-1,t,r);
else return lastOccur(a,m+1,h,t,r);
}
int countTotal(int a[], int n, int t){
int first=firstOccur(a,0,n-1,t,-1);//ekhaane prothom occurence er index nibo
if(first==-1)
    return 0; // odi target array-tei na thake tahole 0 return korbe
int last = lastOccur(a, 0, n - 1, t, -1); // Shesh occurrence-er index niboo
return (last - first) + 1;                // Shesh index theke prothom index biyog kore 1 jog 
}
int main(){
int n,t;
scanf("%d",&n);
int a[n];
 for(int i=0;i<n;i++) scanf("%d",&a[i]);
 scanf("%d",&t);
printf("%d\n",countTotal(a,n,t));
 return 0;
}
