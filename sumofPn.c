#include <stdio.h> 
typedef enum {false=0, true=1 } bool;
bool prime(int x){

  for( int i = 2; i <= x-1; i++)
    {
        if(x%i != 0){
            if (i< x-1)
                continue;
            else{
                
            return true;
            break;
            }
        }
        else{
             return false;
            break;
            }
    }
}
 int main(int argc, char const *argv[])
 {
int n,k,a,b;
n= 100;
for(int i = 1; i <= n; i++)
{

    
for(int j = 1; j <= n; j++)
{
  
    k=i+j;
    //printf("%d + %d = %d \n",i,j,k);
    if(k == n){
     a=prime(i);
     b=prime(j);
     if(a== true && b == true){
         printf("%d + %d = %d \n",i,j,k);
         break;
     }
    }
}
}
   
 }
    
 
 
 
 

 