#include <stdio.h>
int main()
{
    int n,d;
n=10;
    for( int i = 2; i <= n-1; i++)
    {
        if(n%i != 0){
            if (i< n-1)
                continue;
            else{
                
            printf("%d \n",n);
            break;
            }
        }
        else{
            printf("not prime \n");
            break;
            }
    }
    
}
