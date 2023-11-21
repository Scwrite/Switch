#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	printf("Enter the character=");
	fflush(stdin);
	scanf("%c" ,&ch);
	switch(ch)
	{
		case 'a': case'A':
		case 'e': case'E':
		case 'i': case'I':
		case 'o': case'O':
		case 'z': case'Z':
		case 't': case'T':
	printf("%c is vowvel" ,ch);
	break;
	default:
			printf("%c is consonent" ,ch);
	}
		getch();
}
