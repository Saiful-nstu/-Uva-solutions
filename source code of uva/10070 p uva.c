#include<stdio.h>
#include<string.h>
int main()
{
long Flag, Mod4, Mod100, Mod400, Mod15, Mod55, I, leap;
	char A[1000000];
	int print = 0;

	while (gets(A)){

		if ( print != 0 )
			printf("\n");
		print = 1;

		leap = Flag = Mod4 = Mod100 = Mod400 = Mod15 = Mod55 = 0;

		for (I=0; I< strlen (A); I++) {

			Mod4 = ((Mod4 * 10) + (A[I]-'0')) % 4;
			Mod100 = ((Mod100 * 10) + (A[I]-'0')) % 100;
			Mod400 = ((Mod400 * 10) + (A[I]-'0')) % 400;
			Mod15 = ((Mod15 * 10) + (A[I]-'0')) % 15;
			Mod55 = ((Mod55 * 10) + (A[I]-'0')) % 55;
		}

		if ((Mod4==0 && Mod100!=0) || Mod400==0){
			printf("This is leap year.\n");
			leap = 1;
			Flag = 1;
		}

		if (Mod15==0){
			printf("This is huluculu festival year.\n");
			Flag = 1;
		}

		if (leap==1 && Mod55==0)
			printf("This is bulukulu festival year.\n");

		if (Flag==0)
			printf("This is an ordinary year.\n");
	}
	return 0;
}