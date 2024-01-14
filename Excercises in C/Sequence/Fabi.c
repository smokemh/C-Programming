//Write a C Program which prints out fibonacci series 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

	   #include<stdio.h>

void main()
{
	int x,y,z,c;
	x = 1;
	y = 0;
	z=0;
	for (c = 0; c < 100; c++){
		printf("%u,", z);
	z = x + y;
	
		x = y;
		y = z;
	}

	}
	*/

