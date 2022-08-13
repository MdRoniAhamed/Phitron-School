#include<stdio.h>
#include<string.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    char string[100001];
    scanf("%s",string);
    a--;
    b--;
    if(a<=strlen(string)&&b<=strlen(string)){
   for(int i=a,j=b;i<j;j--,i++){
    char temp=string[i];
  //  printf("%d %d\n",a,b);
    string[i] = string[j];
    string[j] = temp;

    }
    }
    string[strlen(string)]='\0';
    printf("%s",string);
    return 0;
}


            ///Abdul Hakim Code.
////int main(){
////    int l,r;
////    scanf("%d %d",&l,&r);
////    char s[100000];
////    scanf("%s",&s);
////    int len = strlen(s);
////    for(int k=0, i=l-1,j=r-1;k<=((r-l)/2);i++,j--,k++){
////        char temp = s[j];
////        s[j] = s[i];
////        s[i] = temp;
////    }
////    printf("%s\n",s);
////}
