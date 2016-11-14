#include <stdio.h>

int mulmod(int n,int m,int p)

{
	
	int k;
	int z;
	
	if(0<=m*n)
	
	{
	
		k=(m*n)/p;
		
		z=(m*n)-(k)*p;
	
	}
	
	else
	
	{
		
		k=(m*n)/p;
		
		z=(m*n)-(k)*p+p;
	
	}
	
	if(z==p)
	
	{
		
		z=0;
		
	}
	
	return z;
	
}
