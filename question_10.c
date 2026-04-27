#include <stdio.h>
#include <string.h>
#include <ctype.h>//isalnum aar tolower er jonno
int check(char s[],int l,int r) {
if (l >= r) return 1;
if (!isalnum(s[l]))
return check(s,l + 1,r);//left side e jodi space baa punctuation thaake taahole skip
if(!isalnum(s[r]))
return check(s, l,r-1);//right side e jodi space ba punctuation thake taaile skip
if(tolower(s[l])==tolower(s[r]))
return check(s,l + 1,r-1);//jodi match hoy taaile bhitore giye abar check hobe
return 0;
}int main(){
char str[1000];
printf("Enter strinf: ");
scanf(" %[^\n]",str);
int n=strlen(str);
    if(check(str,0,n-1)) {
printf("true\n");
} else{
 printf("false\n");
    }
return 0;
}
