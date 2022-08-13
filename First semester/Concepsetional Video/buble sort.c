#include<stdio.h>

void swap(int *n,int *m)
{
    int temp = *n;
    *n = *m;
    *m = temp;
}

void sort(int n, int a[]) {
	for (int steps=0; steps<n; steps++) {
    	for (int i=0; i+1<n; i++) {
        	if (a[i] > a[i+1]) {
            	swap(&a[i], &a[i+1]);
        	}
        	printf("\nStep %d:  ",steps);
        for(int i=0;i<n;i++){
        printf("%d ",a[i]);
        }
    		}

		//if (is_sorted(n, a))	break;

	}
}

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        sort(n,arr);

        printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

