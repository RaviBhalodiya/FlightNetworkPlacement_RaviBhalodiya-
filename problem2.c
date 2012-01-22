#include<stdio.h>
#include<conio.h>

void main()
{
	int a[50],b=0,i,n,k,c=0;
	printf("Enter Number of kids: ");
	scanf("%d",&n);;
	printf("\nEnter any counting number :");
	scanf("%d",&k);
	while(k>n)
	{
		printf("counting number should be lesser than numbers of kids...please enter again..:");
		scanf("%d",&k);
	}

	for(i=0;i<n;i++)
	a[i]=1;
	i=0;

	while(c<n-1)
	{
			if(a[i]!=0)
			b++;

			if(b==k)
			{
				  b=0;
				  a[i]=0;
				  c++;
			}

			i=(i+1)%n;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		break;
	}
	printf("\nThe player sitting on position %d is winner. ",i+1);


}