#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n); ///Input number of students.

    int mark[n],sum_g=0,sum_b=0;
    char student;
    for(int i=0;i<n;i++){
        scanf("%d",&mark[i]);
        if(i%2==0){
            sum_b +=mark[i];    ///Sum of boys marks .
        }
        else{
            sum_g +=mark[i];  ///sum of girls marks.
        }
    }
    scanf(" %c",&student);    ///input boy or girl marks print.
    if(student=='b'){
        printf("%d",sum_b);  ///print boys marks .
    }
    else if(student=='g'){
        printf("%d",sum_g);  ///print girl marks.
    }
 //   printf("%d %d",sum_b,sum_g);

    return 0;
}

