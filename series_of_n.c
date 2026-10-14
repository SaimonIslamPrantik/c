#include <stdio.h>
#include <conio.h>

	void main(){
		int S=0, i, n;
		scanf ("%d", &n);
		
		i=1;
		do
		{
			S=S+i;
			i++;		
		}
		while(i<=n);
		
		printf("%d", S);
		
	getch();
	
	}
		