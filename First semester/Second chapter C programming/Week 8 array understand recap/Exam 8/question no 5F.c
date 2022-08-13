#include<stdio.h>
#include<string.h>

int main()
{
    int n;  ///Input array value.
    scanf("%d",&n);
    int m;
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        int u=0;
        char str[m];
        scanf("%s",str);  ///Input string number.
        int lan=strlen(str);
        for(int j=0;j<lan;j++){
            if(str[j]=='8'){
                u =lan-j;
                break;
            }
        }

    if(u>=11){
        printf("YES\n");  ///Not real number print NO.
    }
    else{
        printf("NO\n");
    }

    }


    return 0;
}
//        str[strlen(str)]='\0';
//        for(int j=0;j<strlen(str);j++){
//            if(str[j]=='8'){
//          u=strlen(str)-j;
//            if(u>=11){
//                printf("Yes");  ///Real number print Yes.
//                break;
//            }
//        }
//    }

