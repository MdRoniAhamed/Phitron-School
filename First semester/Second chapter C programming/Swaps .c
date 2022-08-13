
#include<stdio.h>
int main()
{
    int n = 10;
    int a[n] , b[n];
    for(int i=0;i<n;i++){
        int c=0,d=0;
        for(c=0;c<n;c++){
            scanf("%d",&a[c]);
        }
        for(c=0;c<n;c++){
            scanf("%d",&b[c]);
        }

        for(c=0;c<n;c++){
           int temp = a[c];
           a[c] =b[c];
           b[c] = temp;
        }
        for(c=0;c<n;c++){
            printf("%d ",a[c]);
        }
        printf("\n");
       for(c=0;c<n;c++){
            printf("%d ",b[c]);
        }
        break;
    }
}
