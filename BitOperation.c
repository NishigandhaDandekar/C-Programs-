#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
	printf("\nLoops and Bit Operations\nPart 1 - Using Loops, and Decisions\nPart A\n");
	/*Fibonacci Series of first twenty numbers*/
	printf("\nThe first twenty numbers of the  Fibonacci series are as follows:\n"); 
	int fibo_array[20],i;
	for(i=0;i<20;i++)
	{
		if(i==0)
		{
			fibo_array[i]=0;
			printf("%d   ",fibo_array[i]);/*prints the first number of the fibonacci series*/
		}
		else if(i==1)
		{
			fibo_array[i]=1;/*prints the second number of the fibonacci series*/
			printf("%d   ",fibo_array[i]);
		}
		else
		{
			fibo_array[i]=(fibo_array[i-2]+fibo_array[i-1]);/*prints the rest of the numbers of the fibonacci series*/
			printf("%d   ",fibo_array[i]);
		}
	}
	printf("\n");




	printf("\nPart 2 - Bits and Bytes\nPart A - Binary Printer\n");
	unsigned int mask,number;
        mask=1;
        mask=mask<<31;/*left shift  the mask by 31 bits*/
        number=2;/*Binary printer of number 2*/
        printf("\nThe binary representation of decimal number 2\t \t:");
        while(mask!=0)/*loop to print the bianry representation of the number*/
        {
                if((mask&number)==0)/*if the result of and operation is 0 then print 0 else print 1*/
                        printf("0");
                else
                        printf("1");
                mask=mask>>1;
        }
        printf("\n");

        number=255;
        mask=1<<31;/*left shift  the mask by 31 bits*/
        printf("\nThe binary representation of decimal number 255\t\t:");
        while(mask!=0)/*loop to print the bianry representation of the number*/
        {
                if((mask&number)==0)/*if the result of and operation is 0 then print 0 else print 1*/
                        printf("0");
                else
                        printf("1");
                mask=mask>>1;
        }
        printf("\n");

        number=32;
        mask=1<<31;/*left shift  the mask by 31 bits*/
        printf("\nThe binary representation of decimal number 32\t\t:");
        while(mask!=0)/*loop to print the bianry representation of the number*/
        {
                if((mask&number)==0)/*if the result of and operation is 0 then print 0 else print 1*/
			printf("0");		
		else
                        printf("1");
                mask=mask>>1;
        }
        printf("\n");

        number=1;
        number=~number+1;
        mask=1<<31;/*left shift  the mask by 31 bits*/
        printf("\nThe binary representation of decimal number %d\t\t:",number);
        while(mask!=0)/*loop to print the bianry representation of the number*/
        {
                if((mask&number)==0)/*if the result of and operation is 0 then print 0 else print 1*/
                        printf("0");
                else
                        printf("1");
                mask=mask>>1;
        }
        printf("\n");

        number=INT_MAX;
        mask=1<<31;/*left shift  the mask by 31 bits*/
        printf("\nThe binary representation of decimal number INT_MAX     :");
        while(mask!=0)/*loop to print the bianry representation of the number*/
        {
                if((mask&number)==0)/*if the result of and operation is 0 then print 0 else print 1*/
                        printf("0");
                else
                        printf("1");
                mask=mask>>1;
        }
        printf("\n");

	number=INT_MIN;
	number=-(number);
        number=~number+1;/*calculation of two's complement of the number*/
        mask=1<<31;/*left shift  the mask by 31 bits*/
        printf("\nThe binary representation of decimal number INT_MIN     :");
        while(mask!=0)/*loop to print the bianry representation of the number*/
        {
                if((mask&number)==0)/*if the result of and operation is 0 then print 0 else print 1*/
                        printf("0");
                else
                        printf("1");
                mask=mask>>1;
        }
        printf("\n");


	printf("\nPart 2 - Bits and Bytes\nPart B - Printing A Random Binary Value \n");
	srand(time(NULL));
        number=rand()%(INT_MAX+1)-rand()%(INT_MAX+1);/*Expression to generate random number between INT_MIN  and INT_MAX*/
        printf("\nThe binary representation of decimal number %d  :",number);
        if(number<0)
        {
                number=-(number);
                number=~number+1;
        }        
	mask=1<<31;/*left shift  the mask by 31 bits*/
        while(mask!=0)/*loop to print the bianry representation of the number*/
        {
                if((mask&number)==0)/*if the result of and operation is 0 then print 0 else print 1*/
                        printf("0");
                else
                        printf("1");
                mask=mask>>1;
  	}
        printf("\n\n");	
	return 0;
}


