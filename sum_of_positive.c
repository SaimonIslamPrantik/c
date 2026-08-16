#include <stdio.h>

int main(){
    int sum = 0;
    int input;

    printf("Give the values to sum and type 0 to stop:\n");

    while(1){
        scanf("%d", &input);
        if(input == 0){
        break;
    }
        else if(input > 0){
        sum += input;
    }
}

    printf("the sum is %d", sum);
return 0;
}