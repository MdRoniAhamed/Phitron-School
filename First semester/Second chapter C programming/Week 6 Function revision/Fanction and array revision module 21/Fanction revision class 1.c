#include<stdio.h>
char getAt(int x) {
    return 'A'+x-1;

    }
int main()
{

    for(int i=1;i<27;i++){
        printf("%d %c\n",i,getAt(i));
    }

}
