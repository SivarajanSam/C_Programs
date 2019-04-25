#include <stdio.h>
int main(){
 int a[3][2]= {{2,1},{3,2},{6,10}};
int b[2][3]= {{0,0,0},{0,0,0}};

for(int i = 0; i < 2; i++)
{
    for(int j = 0; j < 3; j++)
    {
        b[i][j]=a[j][i];
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}
return 0;

}