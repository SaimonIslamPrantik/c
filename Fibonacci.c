#include <stdio.h>

int main(){
    int first=0, second=1, next, n, i = 1;

    printf("number of terms: ");
    scanf("%d", &n);

    printf("the Fibonacci series: ");
    for(;i<= n;i++){
        printf("%d ", first);
        next = first+second;
        first = second;
        second = next;
    }
    
}