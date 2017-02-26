#include<stdio.h>
#include "mycode.h"
void insertSort(int src[],int len)
{
    int i,j;
    for(j=1;j<len;j++)
    {
        int value = src[j];
        for(i=j-1;i>=0&&src[i]>value;i--)
        {
            src[i+1] = src[i];
        }
        src[i+1]=value;
    }
}


void myInsertSort()
{
    int src[]={2,1,3,8,4,9,8,2,9,8,8};
    int length = sizeof(src)/sizeof(int);
    for(int i=0;i<length;i++)
    {
        printf("%d",src[i]);
    }
    printf("\n");
    printf("length=%d\n",length);
    insertSort(src,length);
    for(int i=0;i<length;i++)
    {
        printf("%d",src[i]);
    }
    printf("\n");
}
