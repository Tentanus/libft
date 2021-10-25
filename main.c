#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

int	main(void)
{
	printf("\n--==-- TEST STARTING --==--\n\n");
// ------ TEST FT_: isalpha, isdigit, isalnum, isprint ------

	int	c;

	for (c = 0; c <= 300; c++)
	{
		if (isalpha(c) != ft_isalpha(c))
			printf("ERROR ft_isalpha = Control:%d	Test: %d		char:	%c	numb: %d\n", isalpha(c), ft_isalpha(c), c, c);
		if (toupper(c) != ft_toupper(c))
			printf("ERROR ft_toupper = Control:%d	Test: %d		char:	%c	numb: %d\n", toupper(c), ft_toupper(c), c, c);
		if (tolower(c) != ft_tolower(c))
			printf("ERROR ft_tolower = Control:%d	Test: %d		char:	%c	numb: %d\n", tolower(c), ft_tolower(c), c, c);
		if (isdigit(c) != ft_isdigit(c))
			printf("ERROR ft_isdigit = Control:%d	Test: %d		char:	%c	numb: %d\n", isdigit(c), ft_isdigit(c), c, c);
		if (isalnum(c) != ft_isalnum(c))
			printf("ERROR ft_isalnum = Control:%d	Test: %d		char:	%c	numb: %d\n", isalnum(c), ft_isalnum(c), c, c);
		if (isprint(c) != ft_isprint(c))
			printf("ERROR ft_isprint = Control:%d	Test: %d		char:	%c	numb: %d\n", isprint(c), ft_isprint(c), c, c);
	}
 
// ------ TEST FT_: strlen  ------
/*
	char str[] = "this is a test string";

	if (strlen(str) != ft_strlen(str))
		printf("Control: %lu		Test: %lu		String: |%s|\n", strlen(str), ft_strlen(str), str);
*/
// ------ TEST FT_: memset  ------

	char str_1[] = "this is test string 1";
	char str_2[] = "this is test string 1";

//	printf("String 1 (cont): %s\nString 2 (test): %s\n\n", str_1, str_2);
	memset(str_1 + 10, '$', 10);
	ft_memset(str_2 + 10, '$', 10);
	if (strcmp(str_1, str_2))
		printf("String 1 (cont): %s\nString 2 (test): %s\nstrcmp value: %d\n", str_1, str_2, strcmp(str_1, str_2));

// ------ TEST FT_: memmove  ------


	char *src = "this is a good string!\n";
	char dst1[0xF0];
	char dst2[0xF0];
	
	memmove(dst2, src, ft_strlen(src));
	ft_memmove(dst1, src, ft_strlen(src));
	if (strcmp(dst1,dst2))
	printf("Test:		%s\nControl:	%s\n", dst1, dst2);

// ------ TEST FT_: strncmp  ------

	char str_3[] = "adklsfa;d";
	char str_4[] = "aldksaf;";
	int size = 20;

	if (ft_strncmp(str_3, str_4, size) != strncmp(str_3, str_4, size))
		printf("Test:		%d\nControl:	%d\n", ft_strncmp(str_3, str_4, size), strncmp(str_3, str_4, size));

// ------ TEST FT_: strlcpy  ------
/*
char *str = "hello !";
	char buff1[0xF00];
	char buff2[0xF00];
	size_t r1;
	size_t r2;

	memset(buff1, 'A', 20);
	memset(buff2, 'A', 20);
	r1 = strlcpy(buff1, str, 2);
	r2 = ft_strlcpy(buff2, str, 2);

	printf("\nControl:	%zu	%s\nTest:		%zu	%s\n", r1, buff1, r2, buff2);
// ------ TEST FT_: strlcat  ------

	har *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t r1;
	size_t r2;
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	printf("max:	%zu\n", max);
	r1 = strlcat(buff1, str, max);
	r2 = ft_strlcat(buff2, str, max);

//	printf("\nControl:	%zu	%s\nTest:		%zu	%s\n", r1, buff1, r2, buff2);

// ------ TEST FT_: memchr  ------

	c = 't';
	char *s1 = ft_memchr(buff1, c, 4);
	char *s2 = memchr(buff1, c, 4);
	printf("Control:	%s\nTest:		%s", s2, s1);

*/
// ------ TEST FT_: atoi  ------

/*	int ing1 = atoi(in1);
	int ing2 = ft_atoi(in1);

	printf("Control:	%d\nTest:		%d", ing1, ing2);


// ------ TEST FT_: strdup ------

	char *dst10;
	char *dst20;

	dst10 = strdup(in1);
	dst20 = ft_strdup(in1);

	printf("Control:	%s\nTest:		%s", dst10, dst20);
*/
// ------ TEST FT_: strjoin ------
/*
	char in1[] = "Deze String is eerst";
	char in2[] = " en deze erna";
	char *dst10;

	dst10 = ft_strjoin(in1, in2);

	printf("Test:		%s\nLength:\n	%zu\n	%zu\n	%zu\n", dst10, ft_strlen(in1), ft_strlen(in2), ft_strlen(dst10));
	free (dst10);
*/
// ------ TEST FT_: strtrim ------

	char in1[] = "\n\n\n\t\t\tiiiiiii\t    Deze String is eerst     \n\n\n\n\t\t\tiiii\t\t";
	char *dst10;

	dst10 = ft_strtrim(in1, " \n\ti");

	printf("Test:	%s\n", dst10);
	free (dst10);


	printf("\n--==-- TEST COMPLETE --==--\n");
	return(0);
}
