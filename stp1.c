#include<stdio.h>

main()

{
	char k[100];
	char h[100];
	
	printf("enter string =");
	gets(k);
	
	strcpy(h,k)==0;
	strrev(h)==0;
	
	if(strcmp(k,h)==0)
	{
		  printf("string is palindrom");
		
	}
	else
	{
		  printf("string is not palindrom");
	}
	
}
	