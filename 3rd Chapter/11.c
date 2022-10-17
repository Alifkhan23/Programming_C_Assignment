#include <stdio.h>
int main()
{
	float x,y;
	printf("Input total distance in km: ");
	scanf("%f",&x);
	printf("Input total fuel spent in liters: ");
	scanf("%f", &y);

	printf("Average consumption (km/lt)= %f ",x,y);
	return 0;
}
