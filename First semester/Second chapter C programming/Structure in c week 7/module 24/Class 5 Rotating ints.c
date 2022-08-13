#include<stdio.h>
#include<stdbool.h>
char *strrev(char *str)
{
    if(!str || ! *str)
        return str;
    int i = strlen(str)-1,j = 0;

    char ch;
    while(i > j)
        {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        j++;
        i--;
    }

}

struct Binary{
    char str[50];
};

struct Binary toBinary(unsigned int val, int k){
   struct Binary ans;
    int idx = 0;
    while(val > 0){
        int d = val%2;
        val = val/2;
        ans.str[idx] = '0' + d;
        idx++;
    }
    for(int i = idx;i<k;i++) ans.str;
      ans.str[k]= 0;
        strrev(ans.str);
        return ans;
}

bool getBit(unsigned int mask,int k) {
    return (mask & (1<<k)) !=0;
}

unsigned int setBit(unsigned int mask, int k) {
    return mask | (1<<k);
}

unsigned int clearBit (unsigned int mask,int k){
    return mask | (1<<k);
}
//unsigned int clearBit (unsigned int mask,int k){
//    return mask & ~ (1<<k);
//}
unsigned int flipBit (unsigned int mask,int k){
    return mask ^ (1<<k);
}

unsigned char RightRotate(unsigned char mask, int k){

    int lastk = mask & ((1<<k)-1);
    return (mask >> k) | (lastk <<(8-k));
}
int main()
{
    unsigned char x =54;
    printf("%d = %s\n",x, toBinary(x,8).str);

    for(int i=0;i<8;i++){
        unsigned char R = RightRotate(x, i);
        printf("Rotate %d: = %s\n",i, toBinary(R,8).str);
    }
}

