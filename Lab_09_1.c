# include <stdio.h>

float calculateInterest(float pPrinciple, float pRate, float pTime)
{
	float interest;
	interest = pPrinciple * pRate * pTime;
	return interest;
}

float updateBalance(float pCurrentBalance, float pInterest)
{
	float newBalance;
	newBalance = pInterest + pCurrentBalance;
	return newBalance;
}

int main()
{
	float principle, rate, time;
	printf("Please enter the principle, yearly rate, and time in years\n");
	scanf("%f %f %f", &principle, &rate, &time);
	rate = (rate / 100);
	printf("%0.2f", updateBalance(principle, calculateInterest(principle, rate, time)));
	
}
