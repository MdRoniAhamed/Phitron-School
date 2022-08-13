#include<stdio.h>

//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int ar[n];
//    printf("%d",sizeof(ar)/sizeof(ar[0]));
//
//    return 0;
//}
int main()
{

    int n;
    scanf("%d",&n);
    int ar[n];
    memset(ar,0,sizeof(ar));    /// only 0 deya java.
    for(int i = 0;i<n;i++){
        printf("%d ",ar[i]);
    }

    return 0;
}
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int ar[n];
//   for(int i=0;i<n;i++){
//        ar[i]=1;
//   }
//    for(int i = 0;i<n;i++){
//        printf("%d ",ar[i]);
//    }
//
//    return 0;
//}
