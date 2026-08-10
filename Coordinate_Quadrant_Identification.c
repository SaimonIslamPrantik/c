#include <stdio.h>

    int main(){
    int x, y;
        printf("Enter the value of X-axis and Y axis:");
        scanf("%d %d", &x, &y);

        if(x>0 && y>0){
            printf("This directs the 1st Qudrant");
        }
        else if(x<0 && y>0){
            printf("This directs the 2nd Qudrant");
        }
        else if (x<0 && y<0){
             printf("This directs the 3rd Qudrant");
        }
        else if (x>0 && y<0){
             printf("This directs the 4th Qudrant");
        }
        else if (x==0 && y==0){
             printf("This directs the Origin");
        }
        else if (x!=0 && y==0){
             printf("This directs the X axis");
        }
        else if (x==0 && y!=0){
             printf("This directs the Y axis");
        };
        }