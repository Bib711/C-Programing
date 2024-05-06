#include <stdio.h>
#include <math.h>
struct points{
    int x;
    int y;
}point1,point2;
int main()
{
    printf("Enter the cordinate of point1: ");
    scanf("%d%d",&point1.x,&point1.y);
    printf("Enter the co ordinate of point2: ");
    scanf("%d%d",&point2.x,&point2.y);
    int xp=point2.x-point1.x;
    int yp=point2.y-point1.y;
    float res=sqrt((xp*xp)+(yp*yp));
    printf("The Euclidean Distance is:%.3f units",res);
    return 0;

}