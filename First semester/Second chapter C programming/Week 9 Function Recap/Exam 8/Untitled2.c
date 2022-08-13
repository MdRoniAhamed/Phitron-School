#include <stdio.h>
#include <stdbool.h>

bool check_array(int * array,int n)
{
    int i = 0;
    int count[1000] = {0};
    while(i<n)
    {
        count[array[i]]++;
        i++;
    }
    i = 1;
    while(i<=n)
    {
        if(count[i]<1) return false;
        i++;
    }
    return true;

}
int main()
{
    int array[10] = {1,2,3,4,5,6,7,80,9,10};
    bool ans = check_array(array,10);
    if(ans == true) printf("The array contains all elements from 1 to 10");
    else printf("The array doesn't contain all elements from 1 to 10");
    return 0;
}
