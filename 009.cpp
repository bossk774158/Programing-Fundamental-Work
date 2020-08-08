#include<stdio.h>
int main(){
	float money;
	scanf("%f",&money);
	if(money>=0)
	{
		printf("%.f Baht",money);
	}
	else
	{
		printf("%.f Baht",(money));
	}
	return 0;
}
