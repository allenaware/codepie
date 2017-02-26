//
//  selectSort.c
//  topcoder
//
//  Created by allenaware on 2/26/17.
//  Copyright © 2017 allenaware. All rights reserved.
//


#include <stdio.h>
#include "mycode.h"
void static selectSort(int src[],long len)
{
    int i,j;
    for(i=0;i<len;i++)
    {
        int min= src[i];
        int k = i;
        for(j=i+1;j<len;j++)
        {
            if(src[j]<min)
            {
                min= src[j];
                k= j;
            }
        }
        int temp = src[k];
        src[k]= src[i];
        src[i]= temp;
        
    }
    
}
void mySelectSort()
{
    int src[]={3,2,1,5,3};
    long len = sizeof(src)/sizeof(int);
    selectSort(src,len);
    for(int i=0;i<len;i++)
    {
        printf("%d ",src[i]);
    }
    printf("\n");


}
