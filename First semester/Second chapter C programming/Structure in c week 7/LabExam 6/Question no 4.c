#include<stdio.h>
struct fraction {
   int num;
   int denum;
};

struct fraction inverse(struct fraction valu){
   int temp = valu.num;
   valu.num=valu.denum;
   valu.denum=temp;
   return valu;
}


int main (){
   struct fraction valu={2,3}; ///input value.
   struct fraction inverseValu = inverse(valu);
   printf("%d/%d\n",inverseValu.num,inverseValu.denum);///print reverse Value.

}

