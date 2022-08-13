#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    char alphabet[1000];
    fgets(alphabet,1000,stdin); ///Input Alphabet.
    alphabet[strlen(alphabet)-1]='\0';
    bool word = false;
    int ans=0;
    for(int i=0;i<strlen(alphabet);i++){
        char value=alphabet[i];
        if(value!=' '){     ///check new word.
            word=true;
        }
        if(value==' '){
                if(word==true){ ///Check new word .
            ans++;
            word=false;
                }
        }
    }
    if(word==true){ ///check all word.
        ans++;
    }

    printf("%d\n",ans); ///Print all word in the sentence.

    return 0;
}

