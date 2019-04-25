
 #include <stdio.h>
#include <math.h>




int main(){
int l,a,n,r,w,z;
a=0;
l=0;
for (int i =1; i<=10000;i++){

n=i;
w = n;
z=i;

while(z != 0){
      z=z/10;  
      l++;
  }
 
while(w != 0){
    r = w%10;
    
    a += pow(r,l);
    w /=10;
}
if (a == i) {
    /* code */
    printf("Ams: %d \n",n);
}
else

 {
    /* code */
    
}
n=0;
a= 0;
l=0;


}
}
