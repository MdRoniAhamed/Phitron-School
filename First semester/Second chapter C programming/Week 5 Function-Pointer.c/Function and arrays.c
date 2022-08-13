#include<stdio.h>
int getmin(int a,int b){
    if(a <b) return a;
    else return b;
}
int getarraymin(int n, int a[]){
int min =a[0];
for( int i=0;i<n;i++){
    min = getmin(a[i],min);
}
return min;
}
void reverse(char str[]){
    int n = strlen(str);
    for(int i=0,j=n-1;i<j;i++,j--){
            int temp = str[i];
    str[i] = str[j];
    str[j] = temp;

    }
}
int main()
{
 char str[] = "hello";
 reverse(str);
 printf("%S",str);
}
