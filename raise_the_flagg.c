#include<stdio.h>
int x,y,length;
void Calculate(){
        x=x+(length/2);
        y=y+(length/2);
    }

int main(void){
  
    printf("Enter the x-coordinate of the left bottom vertex\n");
    scanf("%d",&x);
    printf("Enter the y-coordinate of the left bottom vertex\n");
    scanf("%d",&y);
    printf("Enter the length of a side\n");
    scanf("%d",&length);

    Calculate();

    printf("The centre of the ground is at [%d,%d]\n",x,y);
    
    return 0;
}