# Array|

#include<stdio.h>
main()
{
	int r,c,a[3][3];
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
		a[0][0]=1;
		a[0][1]=2;
		a[0][2]=3;
		a[1][0]=4;
		a[1][1]=5;
		a[1][2]=6;
		a[2][0]=7;
		a[2][1]=8;
		a[2][2]=9;
		}
	}
		for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d\t",a[r][c]);
		}
	printf("\n");
    }
}
