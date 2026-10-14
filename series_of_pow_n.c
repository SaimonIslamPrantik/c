#include <stdio.h>
#include <conio.h>
#include <math.h>

	void main(){
		int S=0, i, n;
		scanf ("%d", &n);

        for (i=10;i>=n;i--)
        {
            S=S+pow(2,i);
        }

    printf("%d", S);

    getch();
    }