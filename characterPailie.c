#include<stdio.h>
#include<string.h>
#include"mycode.h"
#define N 10
char t[10], s[10];
void pailie(char src[],char target[],long length)
{
    int i,j;
    char strConvert[10];
    if(length ==1)
    {
        target[0] = src[0];
        printf("%s\n",t);
        return;
    }else
    {
        
        for(i=0;i<length;i++)
        {
            for(j=0;j<i&&src[i]!=src[j];j++);
            if(j==i)
            {
                target[0] =src[i];
                memcpy(strConvert,src,i);
                memcpy(strConvert+i,src+i+1,length-i-1);
                pailie(strConvert,target+1,length-1);
            }
        }
    }
    
}

void characterPailie()
{
    sprintf(s, "abbcde");
    memset(t,0,N);
    pailie(s,t,strlen(s));
    
}
