#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    char class[5];
    int  id;
   
};

int main(){
struct student s1,s2;
strcpy( s1.name, "Sivarajan");
strcpy(s1.class,"5 A");
s1.id= 1426;
strcpy( s2.name, "Vishnu Sai Priya");
strcpy(s2.class,"5 A");
s2.id= 1809;
printf("%s  and %s are studying %s. \n their id no is %d and %d Respectively\n",s2.name,s1.name,s1.class,s2.id,s1.id);


}