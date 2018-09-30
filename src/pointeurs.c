/*
 ============================================================================
 Name        : pointeurs.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strcat2(char* s, char* t);
char* strcpy2(char* de, char* vers);

int main(void) {
	char str1[50] = "!!!Hello World!!!"; //17
	char str2[] = " Good to see you !"; //18

	puts(strcat2(str1, str2));
	//puts(strlen(str1));
	return EXIT_SUCCESS;
}

// copie la chaine de dans la chaine vers, renvoie de
char* strcpy2(char* de, char* vers)
{
	while((*vers++=*de++) != '\0')
		;

	return de;
}

char* strcat2(char* s, char* t)
{
	char* ps = s;
	for(;*ps != '\0';ps++)
		;
	strcpy2(t, ps);

	return s;
}
