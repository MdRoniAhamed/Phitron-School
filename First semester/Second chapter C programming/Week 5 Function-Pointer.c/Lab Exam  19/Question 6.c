#include<stdio.h>
void Square(int n, int squares[]){
 for(int i=0;i<n;i++){
        squares[i]=i+1;///Input Array Value.
    }
     for(int i=0;i<n;i++){
       squares[i] = squares[i]*squares[i];///Array Square Function .
    }
}
int main()
{   ///Md Roni Ahamed.
    int n;// size of square.
    scanf("%d",&n);
   // printf("%d\n",n);
    int squares[n];
    Square(n,squares);
    for(int i=0;i<n;i++){
        printf("%d ",squares[i]);///Output Square.
    }
}
