#include<stdio.h>
int main(   )
{

    int a=0,l,v=0,c=0;
 //   printf("Enter the word of number: ");

    char vowel[100];
    gets(vowel);
    int n=strlen(vowel);

   // printf("Enter the word or sentence:");
    n ++;
//    for(a=0;a<n;a++){
//        scanf("%c",&vowel[a]);
    }
//    n--;
    for(l=0;l<n;l++){
        if( vowel[l]=='a'){
            v++;
            printf("Yes");
            return 0;
        }
        else if(vowel[l]=='e'){
            v++;
            printf("Yes");
            return 0;
        }
        else if(vowel[l]=='i'){
            v++;
            printf("Yes");
            return 0;
        }
        else if(vowel[l]=='o'){
            v++;
            printf("Yes");
            return 0;
        }
        else if(vowel[l]=='u' ){
            v++;
            printf("Yes");
            return 0;
        }

        else{
        c++;
        printf("No");
            return 0;
    }
    }



}
