#include<stdio.h>

int main()
{
    char c[100];
    scanf("%s",&c);     ///Input number.
    int i=0,j=strlen(c)-1,v=0;
    while(i<j){
        if(c[i]!=c[j]){     ///check Palindrome.
            printf("NO.");  ///Print no palindrome.
            v++;
            break;
            //return 0;
        }
        i++,j--;
    }
    if(v==0){
    printf("YES."); ///print Palindrome
    }
    return 0;
}

