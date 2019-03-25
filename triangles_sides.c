#include<stdio.h>
#include<math.h>
int main(){
  int xa=0,xb=0,xc=0,ya=0,yb=0,yc=0;
  printf("Enter the x-coordinate of vertex A\n");
  scanf("%d",&xa);
  printf("Enter the y-coordinate of vertex A\n");
  scanf("%d",&ya);
  printf("Enter the x-coordinate of vertex B\n");
  scanf("%d",&xb);
  printf("Enter the y-coordinate of vertex B\n");
  scanf("%d",&yb);
  printf("Enter the x-coordinate of vertex C\n");
  scanf("%d",&xc);
  printf("Enter the y-coordinate of vertex C\n");
  scanf("%d",&yc);

  printf("Length of side AB is %.1f\n",sqrt(((xa-xb)*(xa-xb))+((ya-yb)*(ya-yb))));
  printf("Length of side BC is %.1f\n",sqrt(((xb-xc)*(xb-xc))+((yb-yc)*(yb-yc))));
  printf("Length of side AC is %.1f\n",sqrt(((xa-xc)*(xa-xc))+((ya-yc)*(ya-yc))));

  return 0;
}