/* Given the coordinates (x, y) of a center of a circle and it’s radius,
write a program which will determine whether a point lies inside
the circle, on the circle or outside the circle.
Author Majid Mujahid Hussain Dated 24 December 2020 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    int x2,y2,x1,y1,radius;
    float pc;
    printf("Hello world!\n");

    printf("Please enter the co-ordinates of center of the circle: \n");
    scanf("%d %d",&x1, &y1);

    printf("Please enter the radius of the circle: \n");
    scanf("%d", &radius);

    printf("Please enter the co-ordinates of the point (X,Y):\n");
    scanf("%d %d", &x2, &y2);

    //calculating the distance between the center of the circle and the point(x,y).
    pc = sqrt(pow((x2-x1),2) + pow((y2-y1),2));

     if (pc > radius)
     {
         printf("The point (%d,%d) lies outside the circle. \n ",x2,y2);
     }
     else if (pc < radius)
     {
          printf("The point (%d,%d) lies inside the circle. \n ",x2,y2);
     }
     else if (pc == radius)
     {
          printf("The point (%d,%d) lies on the boundary of the circle. \n ", x2,y2);
     }
     else
     {
          printf("Wrong Entry. \n ");
     }
    getch();
    return 0;
}
