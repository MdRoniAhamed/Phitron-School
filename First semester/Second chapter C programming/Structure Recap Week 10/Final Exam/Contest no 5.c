#include<stdio.h>

int main()
{
    int size;
    scanf("%d",&size); ///input size.
    int min=0;
    for(int i=0; i<size; i++)
    {
        int len;            ///Input array length.
        scanf("%d",&len);
        int array[len];
        for(int j=0; j<len; j++)
        {
            scanf("%d",&array[j]);   ///input array value.
        }
        for(int k=0; k<len-1; k++)
        {
            for(int j=k; j<len; j++)
            {
                if(array[j]<array[k])   ///sort array.
                {
                    int temp = array[k];
                    array[k] = array[j];
                    array[j] = temp;
                }
            }
        }
        min = array[1]-array[0];
        for(int j=0;j<len-1;j++)
        {
            int max = array[j+1]-array[j]; ///Found the min value.
            if(max < min)
            {
                min=max;
            }
//printf("%d ",array[j]);
        }
        printf("%d\n",min); ///Min value print .

    }
    return 0;
}

//#include<stdio.h>
//
//int main()
//{
//    int size;
//    scanf("%d",&size);
//    int min=0;
//    for(int i=0; i<size; i++)
//    {
//        int len;
//        scanf("%d",&len);
//        int array[len];
//        for(int j=0; j<len; j++)
//        {
//            scanf("%d",&array[j]);
//        }
//        for(int k=0; k<len-1; k++)
//        {
//            for(int j=k; j<len; j++)
//            {
//                if(array[j]<array[k])
//                {
//                    int temp = array[k];
//                    array[k] = array[j];
//                    array[j] = temp;
//                }
//            }
//        }
//        min = array[1]-array[0];
//        for(int j=0;j<len-1;j++)
//        {
//            int max = array[j+1]-array[j];
//            if(max < min)
//            {
//                min=max;
//            }
//
//        }
//        printf("%d\n",min);
//
//    }
//    return 0;
//}

