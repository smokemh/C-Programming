//Write a Pogram to find the Reamining Time in Hours, Minutes and Second
#include<stdio.h>
void main()
{
	float sped, dis, time;
	printf("Entere The Remaining distence : ");
	scanf_s("%f", &dis);
	printf("Entere The Speed Of Car : ");
	scanf_s("%f", &sped);
	time = (dis / sped);
	int time_h = time;
	float time_me = time - time_h;
	float time_inm = time_me * 60;
	int  time_m = time_inm;
	float timee_s = time_inm - time_m;
	float time_ins = timee_s *60;
	int time_s = time_ins;
	printf("Remaining Time = ");
	printf(" %d : %d : %d \n",time_h,time_m,time_s);
}
