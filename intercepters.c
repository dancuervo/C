#include<stdio.h>
int main(){
  int m,x,y,c;
  printf("Enter the value of m\n");
  scanf("%d",&m);
  printf("Enter the value of c\n");
  scanf("%d",&c);
  x=(0-c)/m;
  y=(m*0)+c;
  printf("The line equation is y=%dx+%d\n",m,c);
  printf("The x intercept is %d\n",x);
  printf("The y intercept is %d\n",y);
  printf("The house number is %d",x+y);
  
  return 0;
}