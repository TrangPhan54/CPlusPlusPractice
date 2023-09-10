// Nhap hai so nguyen duong
// Tim uoc so chung lon nhat cua hai so nguyen duong nay

#include <stdio.h>

void main()
{
	int a, b, uscln, aa, bb;

	do
	{
		printf("Nhap a va b: ");
		scanf("%d%d", &a, &b);
	}
	while (a<=0 || b<=0);

	aa = a;
	bb = b;
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	printf("=> USCLN cua a va b la %d\n", a); 
	printf("=> BSCNN cua a va b la %d\n", aa*bb/a); 


}