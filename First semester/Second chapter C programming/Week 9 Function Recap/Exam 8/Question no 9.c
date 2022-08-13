#include<stdio.h>

int check_palindrome(char str[])
{
    int count = 0;
    char stri[101];
    strcpy(stri,str);
    strrev(stri);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!=stri[i]){  ///check palindrome .
            count++;
        }
    }
    count/=2;
    return count ;

}
int main()
{
    char str[101];
    scanf("%s",str);
    int count = check_palindrome(str);  /// Call check_palindrome.

    printf("%d\n",count);  ///count string not palindrome.
    return 0;
}

