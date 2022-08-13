#include<stdio.h>
int get_length(char input[])
{
    int index=0;
    while(input[index]!='\0'){
        index++;
    }
    return index;
}
int main()
{
    char a[]="hellobae",b[]="world";
    int l1=get_length(a);
    int l2=get_length(b);
    l2*=3;
    printf("%d %d\n",l1,l2);

    return 0;
}

