

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char* values[3];

	    values[0] = "Hello";
	    values[1] = "Mew meww";
	    values[2] = "Miau miau =3";


	    for(int i=0; i<3; i++)
	    {
	           printf("%s", values[i]); // printing ---> Hello Mew meww Miau miau =3
	    }

}
