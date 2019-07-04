#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num=0;
	int sum=0;
	for (num = 1; num <= 100; num=num+2)
	{
		sum = sum + num;
	}
	printf("The total of odd numbers is :");
	printf("%d",sum);
	printf("\n");

	//add even between 1 and 100
    num=0;
    sum=0;
	for (num = 2; num <= 100; num=num+2)
	{
		sum = sum + num;
	}
	printf("The total of even numbers is :");
	printf("%d",sum);
	printf("\n");
	//takes two numbers and ad  them togther
	printf("Enter an integer: ");
	int num1;
	int num2;
	sum=0;
    scanf("%d",&num1);
    scanf("%d",&num2);
    for(num=num1+1;num<num2;num++){
      sum+=num;
    }

    printf("The sum is :%d", sum);
    return 0;
    //prime  numbers two dugut prime numbers
    int div;
    div=2;
    scanf("%d",num)
    while(div<=sqrt(num))
    {
        if (num div mode = 0)
    }
    }

}
