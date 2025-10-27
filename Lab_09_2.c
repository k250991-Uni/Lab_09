# include <stdio.h>

float calculateTotal(int pSize, float pPriceArray[pSize])
{
	float totalPrice = 0;
	int i;
	for(i=0; i<pSize; i++){
		totalPrice += pPriceArray[i];
	}
	return totalPrice;
}

float applyDiscount(float pTotalPrice)
{
	if(pTotalPrice > 5000.0){
		pTotalPrice *= 0.9;
	}
	return pTotalPrice;
}

float printBill(float pBill)
{
	printf("Your total bill is %f\n", pBill);
}

int main()
{
	int size;
	printf("Please enter total number of items in the cart\n");
	scanf("%d", &size);
	
	float priceArray[size];
	int i;
	for(i=0; i<size; i++){
		printf("Please enter the price of item no. %d\n", i+1);
		scanf("%f", &priceArray[i]);	
	}
	
	printBill(applyDiscount(calculateTotal(size, priceArray)));
}
