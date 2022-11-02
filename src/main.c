/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:38:35 by klaksi            #+#    #+#             */
/*   Updated: 2022/11/01 20:01:00 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <string.h>

// **** to test ft_strmapi ***
// char	ft_mine_toupper(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 		return(c - 32);
// 	return(c);


// }


int main(void)
{
// 	char *str = "Allo!";
// 	int i = 0;
// 	while(str[i])
// 	printf("ISALPHA: %d\n", ft_isalpha(str[i++]));


// 	char test[] = "hiiiiiiiiie";
// 	printf("%zu\n", ft_strlen(test));
	

// 	char *str = "Allo!";
// 	int i = 0;
// 	while(str[i])
// 		printf("%d\n", ft_isalnum(str[i++]));

// 	char *str = "Allo!";
// 	int i = 0;
// 	while(str[i])
// 		printf("%d\n", ft_isascii(str[i++]));

// 	char *str = "Allo!";
// 	int i = 0;
// 	while(str[i])
// 		printf("%d\n", ft_isprint(str[i++]));



// 	char *str = "Allo!";
// 	int i = 0;
 
// 	while(str[i])
// 		printf("%c\n", ft_toupper(str[i++]));



// 	char *str = "Allo!";
// 	int i = 0;
// 	while(str[i])
// 		printf("%c\n", ft_tolower(str[i++]));



// int main(void)
// {
// 	char b[] = {"son pére"};
// 	int c = 'c';
// 	size_t len = 2;
// 	printf("%s", ft_memset(b, c, len));



// 	char s[] = {"son pére"};
// 	size_t n = 2;
// 	ft_bzero(s, n);
// 	printf("%s\n", s);


// 	char s[] = {"son pére"};
// 	char c = 'p';
// 	printf("%s\n", ft_strchr(s, c));



// 	char s[] = {"son pére"};
// 	char c = 'r';
// 	printf("%s\n", ft_strrchr(s, c));


// 	char src[] = "kaksynday";
// 	char dest[] = "monteur";
// 	printf("%s\n", dest);
// 	ft_strlcpy(dest, src, 10);
// 	printf("%s\n", dest);


//     char str1[100] = "Learningisfun";
//     char str2[100] = "Learningisfun";
//     char *first;
//     char *second;

//     first = str1;
//     second = str2;
//     printf("Original string : %s\n ",str1);
//     ft_memmove(first + 8, first, 10);
//     printf("my memmove overlap : %s\n ", str1);
//     memmove(second + 8, second, 10);
//     printf("real memmove overlap : %s\n ", str2);


// 	char	s1[] = "abz";
// 	char	s2[] = "abc";
// 	printf("%d\n", ft_strncmp(s1, s2, 8));



// 	char	src[] = "source";
// 	char	dest[] = "destination";
// 	printf("%s\n", dest);
// 	ft_memcpy(dest, src, 10);
// 	printf("%s\n", dest);



// 	char	src[] = "source";
// 	char	dest[50] = "destination";
// 	printf("%s\n", dest);
// 	ft_strlcat(dest, src, 30);
// 	printf("%s\n", dest);



// 	char	str1[] = "source";
// 	char	str2[50] = "destination";
// 	size_t len = 10;

// 	printf("%d\n", ft_memcmp(str1, str2, len));
// 	printf("%d\n", memcmp(str1, str2, len));



//     char    haystack[] = "j'aime les sushis";
//     char    needle[] = "les";
// 	size_t	len = 10;
//     printf("%s\n", ft_strnstr(haystack, needle, len));



// 	char str[] = "abcdefghijkl";
	
// 	char find = 'k';
// 	printf("%s\n", ft_memchr(str, find, 15));



// 	int i = INT_MAX;
// 	char	str[] = "184467440715";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// 	printf("i-max: %d\n", i);
// 	printf("i-min: %d\n", INT_MIN);



//     char    test[] = "cacapipi";
//     printf("%s\n", ft_strdup(test));
//     printf("%s\n", strdup(test));



// 	char str[] = "j'aime les sushis";
// 	int start = 2;
// 	int len = 4;
	
// 	printf("%s\n", ft_substr(str, start, len));

// char c;
// c = 'k';
// int fd;
// fd = 1;
// ft_putchar_fd(c, fd);

// char s[] = "kuksunday";
// int fd;
// fd = 2;
// ft_putstr_fd(s, fd);

// char s[] = "sushis";
// int fd = 0;
// ft_putendl_fd(s, fd);

// int n;
// n = 2461456;
// int fd;
// fd = 2;
// ft_putnbr_fd(n, fd);


// char s1[] = "j'aime les sushis j'aime";
// char set[] = "j'aime";
// printf("%s\n", ft_strtrim(s1, set));

// char s1[] = "kam";
// char s2[] = "élia";
// printf("%s\n", ft_strjoin(s1, s2));


	// char const c[] = "mapi";
	// printf("%s\n", ft_strmapi(c, ft_mine_toupper));
}


// int	main(int argc, char **argv)
// {
// 	if (argc == 4)
// 	{
// 		printf("Real: %s -- %c -- %i \n", argv[1], argv[2][0], ft_atoi(argv[3]));
// 		printf("Real: %s", (char *)memset(argv[1], argv[2][0], ft_atoi(argv[3])));
// 		printf("\n");
// 		printf("Mine: %s", (char *)ft_memset(argv[1], argv[2][0], ft_atoi(argv[3])));
// 		printf("\n");
// 	}
// 	else
// 		printf("ARGS ERROR!\n");
// }
