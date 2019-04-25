#include <stdio.h>
int main()
{
int arr[7]={1435,44373,653,45357,353,24,9},g  ;
for(int i = 0; i < 7; i++)
{
for(int j = 0; j < 7; j++)
{
    if(arr[j]>arr[j+1])
{
int k,l,temp;
k= arr[j];
l= arr[j+1];
temp=k;
k=l;
l=temp;
arr[j]=k;
arr[j+1]=l;

}
}

}
for(int f = 0; f < 7; f++)
{
    printf("%d \n",arr[f]);
}


}