#include <stdio.h>
#include "mycode.h"
void static mergeSort(int src[],size_t start, size_t end)
{
    int middle= end/2;
    if(middle==0)
    {
    }
    else
    {
        mergeSort(src,start,middle);
        mergeSort(src, middle, end);
    }
    
    
}
void myMergeSort()
{
    int src[]={3,1,5,8,2,1};
    size_t len = sizeof(src)/sizeof(int);
    mergeSort(src, 0,len-1);
    for(int i =0;i<len;i++)
    {
        printf("%d ",src[i]);
    }
    printf("\n");
    
}