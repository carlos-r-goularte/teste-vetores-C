#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int n[4][4],n1[4][4],i,j;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Digite os valores da matriz [%d][%d]: ",i,j);
			scanf("%d",&n[i][j]);
			n1[j][i]=n[i][j];
		}
	}
	
	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4;j++)
		{
			printf("%d\t",n1[i][j]);
		}
	}

	return 0;

}