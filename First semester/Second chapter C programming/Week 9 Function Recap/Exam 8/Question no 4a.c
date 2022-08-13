#include<stdio.h>

void foo()
{
    printf("foo\n"); //print foo.
    bar();  ///call bar.
}
void bar()
{
    printf("bar\n"); //print bar.
}
int main()
{
    foo(); ///call foo.

    return 0;
}

