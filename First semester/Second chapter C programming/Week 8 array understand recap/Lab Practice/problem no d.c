#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char cu[100];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%s",cu);
       int val=strlen(cu);
       if(strcmp(cu,"Tetrahedron")==0){
       count+=4;
       }
       else if(strcmp(cu,"Cube")==0){
        count +=6;
       }
       else if(strcmp(cu,"Octahedron")==0){
        count +=8;
       }
       else if(strcmp(cu,"Dodecahedron")==0){
        count+=12;
       }
       else if(strcmp(cu,"Icosahedron")==0){
        count+=20;
       }
    }
    printf("%d",count);
    return 0;
}

