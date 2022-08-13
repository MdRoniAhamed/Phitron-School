#include<stdio.h>
#include<string.h>

void toBinary(unsigned int val,char str[]) {
    int idx = 0;
    while (val > 0) {
        int d = val%2;
        val = val/2;
        str[idx] = '0' + d;
        idx++;
    }
    char k[100];
    int j=0;
    for(int i=idx-1;i>=0;i--){

       k[j] =str[i];
        j++;
    }
    str[idx] = '\0';
    printf("%s\n",k);

}

int main(){
    char str[100];
    unsigned int v = 256;
    toBinary(v,str);
   printf("%s\n",str);
}
