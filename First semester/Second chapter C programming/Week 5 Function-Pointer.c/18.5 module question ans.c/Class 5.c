#include<stdio.h>

int getRoot(double a,double b, double c, double *root1, double *root2){

    double D=b*b-4*a*c;
    if (D < 0) return 0;
    else if( D ==0){
        *root1 = (-b)/(2*a);
        return 1;
    }
    else {
        *root1 = (-b + sqrt(D))/(2*a);
        *root2=(-b - sqrt(D))/(2*a);
        return 2;
    }

    }

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf",&a,&b,&c);

    double root1, root2;
    int roots = getRoot(a,b,c,&root1,&root2);
    printf("We have %d roots.\n",roots);
    if(roots>=1)printf("%lf\n",root1);
    if(roots==2)printf("%lf",root2);
}
