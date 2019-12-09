#include<stdio.h>
main()
{
	int i,n;
	printf("\n enter a no :");
	scanf("%d",&n);
	printf("\n Factors of %d are ",n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		printf("\n%d",i);
	}
}
