#include<stdio.h>
int main() 
{
    int N,A[100],K,i,sum=0;
    scanf("%d%d",&N,&K);
    for(i=0;i<N;i++)
    scanf("%d",&A[i]);
    for(i=0;i<K;i++)
    sum=sum+A[i];
    printf("%d",sum);
}
