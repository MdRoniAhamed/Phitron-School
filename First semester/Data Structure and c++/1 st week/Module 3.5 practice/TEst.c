#include<stdio.h>
#include<string.h>

int main()
{
    char ar[101];
    scanf("%s",&ar);
    int len = strlen(ar);

    int x=0, y=0;
    for(int i=1; i<len; i++)
    {
        if(97<=ar[0] && ar[0]<=122)
        {
            if(65<=ar[i] && ar[i]<=90)
            {
                x++;
                if(x==len-1)
                {
                    ar[0]-=32;
                    for(int j=1; j<len; j++)
                    {
                        ar[j]+=32;
                    }
                    printf("%s",ar);
                    return 0;
                }
            }
        }
    }
    for(int i=0; i<len; i++)
    {
        if(65<=ar[i] && ar[i]<=90)
        {
            y++;
            if(y==len)
            {
                for(int i=0; i<len; i++)
                {
                    ar[i]+=32;
                }
                printf("%s",ar);
                return 0;
            }
        }
    }
    printf("%s",ar);

    return 0;
}
