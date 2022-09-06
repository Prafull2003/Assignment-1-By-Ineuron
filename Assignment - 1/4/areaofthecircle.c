#include<stdio.h>
int main()
{
    int R,A;

    printf("Enter the Radius of circle ");
    scanf("%d",&R);
    A = 3.14*R*R ;
    printf("Area of circle is %d having the radius %d",A,R);

    return 0;

}