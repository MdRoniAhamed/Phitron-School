#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of student: ");
    scanf("%d",&n);

    double *a = (double*)malloc(n*sizeof(double)); ///Dynamic allocation.
    printf("%p",a);
//  double a[n];
    for (int i=0;i<n;i++){
        scanf("%lf",&a[i]);
    }
    double sum = 0;
    for(int i=0;i<n ;i++){
        sum +=a[i];
    }
    printf("Total Marks: %lf",sum);
}
