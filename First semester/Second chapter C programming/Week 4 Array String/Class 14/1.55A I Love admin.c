
#include<stdio.h>
#include<stdbool.h>
int main(   )
{
    int n,i=0;
    scanf("%d",&n);
    int magic[n];
    for(i=0;i<n;i++){
        scanf("%d",&magic[i]);
    }
    int maxvalue=magic[0],minvalue = magic[0],answer=0;
     for(i=1;i<n;i++){
        if(magic[i]> maxvalue||magic[i]< minvalue){
                answer++;

        }
        if(magic[i]>=maxvalue){
            maxvalue = magic[i];
        }
        if(magic[i]<=minvalue){
            minvalue = magic[i];
        }
    }
    printf("%d",answer);
    return 0;


}

