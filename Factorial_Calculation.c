#include <stdio.h>

int main(){
    int factor = 1;
    int modified_input;

    printf("type the number you wanna get factorial of:\n");
    scanf("%d", &modified_input);
    if(modified_input < 0) printf("impossible");
    
    int input = modified_input;

    while (modified_input > 0 )
    {
        factor *= modified_input;
        modified_input--;
    }
    

    printf("%d! = %d", input, factor);
return 0;
}