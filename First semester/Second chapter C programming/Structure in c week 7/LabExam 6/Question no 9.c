#include<stdio.h>
#include<string.h>
#include<stdbool.h>
char *strrev(char *str)
{
   if(!str || ! *str)
       return str;

   int i = strlen(str) - 1, j=0;

   char ch;
   while (i>j)
   {
       ch = str[i];
       str[i] = str[j];
       str[j] = ch;
       i--;
       j++;
   }
   return str;
}
struct Binary{
   char str[50];
};

struct Binary toBinary(unsigned int val, int k){
   struct Binary ans;
   int idx =0;
   while(val > 0){
       int d = val%2;
           val /=2;
           ans.str[idx]= '0'+ d;
           idx++;
   }
   for (int i=idx; i<k;i++)  ans.str[i] = '0';
   ans.str[k] = 0;
   strrev(ans.str);
   return ans;
}
bool getBit(unsigned int mask, int k) {
   return (mask & (1 << k)) !=0;
}

int main()
{
   int x = 44;
   printf("%d = %s\n", x, toBinary(x, 8).str);
   int temp = x;
   int i = 0;
   while(temp>0)
   {
       temp = temp >> 1;
       i++;
   }
   i--;
   int x2 = (x^(1<<i));
   printf("%d = %s\n", x2, toBinary(x2,8).str);
}

