#include<stdio.h>

#include<conio.h>



int main ()

{

	int x,y;

	char a;

	float z;

	

	program:

	printf ("\n\nAre you a [B]oy or a [G]irl");

	scanf ("%c",&a);

	

	if (a=='b'||a=='B')

	{

		printf ("\n\nWELCOME BOY");

	}

	else

	{

		printf ("\n\nWELCOME GIRL");

	}

	

	printf ("\n\nQUOTIENT OF TWO INTEGERS\n\n");

	printf ("Enter 1st number: ");

	scanf ("%d",&x);

	printf ("Enter 2nd number: ");

	scanf ("%d",&y);

	

	z=x/y;

	

	printf ("The quotient of %d and %d is %.2f",x,y,z);

	

	int b=z;

	

	bool isquotientsingledigit (int b);

	{

		if (b >= 0 && b < 10) 

		{ 

			return true; 

		} 

		else 

		{ 

			return false; 

		} 

	}

	

	getch ();

}
