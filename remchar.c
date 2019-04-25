#include "stdio.h"

int main(int argc, char const *argv[])
{
  char n []= "Sivarajan";
 for(int i =0 ;i<=9;i++){
   if(n[i] == 'S')
   {
       continue;
   }
   else{
       n[i]='d';
   }
 }
printf("%s \n",n);
    return 0;
}
