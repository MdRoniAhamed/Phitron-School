#include<stdio.h>
#include<string.h>

int main()
{
    char string[1001];
    scanf("%s",&string);  ///Input string.
    string[strlen(string)]='\0';  /// NULL.
    int count[11]= {0}; /// count frequency array.
    int number=0;     /// number.
    for(int i=0; i<strlen(string); i++)
    {
        if(string[i]>='0'&&string[i]<='9')   ///check string 0 to 9 value.
        {
            count[string[i]-'0']=1;          ///frequency array count 1 .
            number++;                       ///Found the value number++;
        }

    }
    int c=0; /// c =0 .
    if(number>=10)         ///check Number value 10.
    {

        for(int i=0; i<10; i++)
        {
            if(count[i]==1)
            {
                c++;    /// c value count c++.
            }
        }
    }
    if(c>=10)
    {
        printf("YES\n");  ///Print Yes.
    }
    else
    {
        printf("NO\n");   ///print NO.
    }
    return 0;
}

