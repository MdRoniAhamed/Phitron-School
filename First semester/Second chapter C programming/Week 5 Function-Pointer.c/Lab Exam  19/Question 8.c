#include<stdio.h>
#include<string.h>
void Conect( char first[] , char second[],char out[])
{
    strcat(out,first);
    strcat(out,second);
}

int main()
{
    char first[]="Hello, Roni ";//Input 1st characters
    char sceound[]= "Ahamed. ";//Input 2nd characters
    char out[100];

    Conect(first,sceound,out);

   printf("%s",out);

}
