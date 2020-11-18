

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	int a=100;
	int *p1=&a;

	int b=200;
	int *p2=&b;

	void *p3=p2;

	*p1=*p2;
	printf("%d-----%d-----%d----%d-----%d",*p1,*p2,p2,(int*)p3,*(int*)p3);
	return EXIT_SUCCESS;
}
