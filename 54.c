#include<stdio.h>
main()
{
	int i,n,count=0;
	printf("\n enter a no :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==2)
	  printf("\n prime");
	else
	  printf("\n not prime");
}
