#include<bits/stdc++.h>
using namespace std;

int f(int now){
    if(now<0) return now;
  int l =  f(now - 1);
    printf("%d\n",l);
    return l;

}
int main(){
    printf(f(5));

}
