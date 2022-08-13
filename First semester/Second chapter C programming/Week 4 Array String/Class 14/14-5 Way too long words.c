#include<stdio.h>
#include<string.h>
int main(   )
{
    int o,i=0;
    scanf("%d",&o);
    for(i=0;i<o;i++){
        char roi[101];
        scanf("%s",roi);
   int len =strlen(roi);
   printf("%d\t\n",len);
        if(len<11){
            printf("%s\n",roi);
        }
        else{
            printf("%c%d%c\n",roi[0],len-2,roi[len-1]);
        }
    }

    return 0;
}
