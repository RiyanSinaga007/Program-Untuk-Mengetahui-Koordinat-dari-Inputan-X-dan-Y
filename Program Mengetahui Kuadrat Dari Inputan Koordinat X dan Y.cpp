#include<iostream>
using namespace std;

int main()
{
	int x,y;
	printf("mengetahui kuadrat dari inputan koordinat x dan y\n");
	printf("----------\n");
	printf("masukan nilai x :");
	scanf("%i",&x);
	printf("masukan nilai y :");
	scanf("%i",&y);
	
	if(x>0 && y>0)
	printf("kuadrat 1");
	if(x>0&&y<0)
	printf("kuadrat 2");
	if(x<0 && y<0)
	printf("kuadrat 3");
	if(x<0 && y>0)
	printf("kuadrat 4");
	if(x==0 &&y==0)
	printf ("titik pusat");
	getchar();
}
