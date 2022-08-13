#include<stdio.h>
#include<string.h>

struct Family  ///create structure.
{
    char name[30];  ///structure name.
};
int main()
{
    int size;  ///structure size.
    scanf("%d ",&size);
    struct Family name[size];
    for(int i=0;i<size;i++)
    {
        gets(name[i].name);  ///Input family name.
    }
    int count=0;
    for(int i=0;i<size-1;i++)
    {
      for(int j=i+1;j<size;j++)
      {
          int n=0;
          n = strcmp(name[j].name, name[i].name);
          if(n==0){
            count++;

            break;
          }
      }
    }
    if(count!=0)   ///check double family member name.
    {
        printf("Yes\n");  ///print yes.
    }
    else{
        printf("No\n");   ///print no.
    }
    return 0;
}

