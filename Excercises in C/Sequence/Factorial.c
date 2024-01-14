#include<stdio.h>

void main()
{
	int x, y, z, b;
	printf("Enter Number Whose Fectorial Is To Be Taken = ");
	scanf_s("%d",&x);

	if (x >= 0 && x < 10){
	  y = x  ;
	
			for (b = 1; b < x; b++){
				z = y;
				y = x - b;
				y = z*y;
			}
		
		printf("%d\n", y);
	}
	else
		printf("INVALID ENTRY\n");
		}*/