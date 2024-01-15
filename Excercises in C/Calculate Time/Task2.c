//Write a Program for  User Input Analyzer
#include <stdio.h>  
void main( void )
{   
	int num1;          
printf("Enter Number . = ");   
scanf("%d", &num1); 
 if (num1 > 0) {    
	 if (num1 >= 1000) {    num1 = 1000;  }   
	 else {       
		 if (num1 <500) {       num1 =num1*2;       }       
		 else {          num1 =num1*10;       }        }    }   
 else {       num1 =num1 + 30;    }         
 printf("Num1 = %d\n",num1); 
 }  

