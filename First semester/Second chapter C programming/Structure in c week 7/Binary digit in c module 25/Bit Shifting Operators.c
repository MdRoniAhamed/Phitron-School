#include<stdio.h>
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
int main()
{
    unsigned int x = 35;
    char sx[100],sy[100],sleft[100],sright[100];

    unsigned char lx = x << 1;
    unsigned char rx = x >> 1;

    toBinary (lx,sleft,8);
    toBinary(rx,sright,8);

    printf("lx = %d , %s \n",lx,sleft);
    printf("rx = %d , %s \n",rx,sright);


}

