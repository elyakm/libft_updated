/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamelialaksi <kamelialaksi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:38:35 by klaksi            #+#    #+#             */
/*   Updated: 2022/11/12 12:45:46 by kamelialaks      ###   ########.fr       */
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

// void	my_function(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c >= 'a' && *c <= 'z')
// 		*c -= 32;
// }

// char	*ft_itoa(int n);
// int main(void)
// {
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


// char c[] = "striteri";
// ft_striteri(c, my_function);
// printf("%s\n", c);


	// int i = 123;
	// printf("%s\n", ft_itoa(i));
	
// t_list kam;

// kam = ft_lstnew("bozo");
// printf("%s", kam);

// }


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

// typedef struct s_person
// {
// 	char *name;
// 	char *last_name;
// 	int age;
// 	struct s_person *next;
// 	struct s_person *prev;
// }				t_person;

// int main()
// {
// 	t_person person;
// 	person.name = "Kamelia";
// 	person.last_name = "Laxi";
// 	person.age = 21;
// 	person.next = NULL;
// 	// person.prev = NULL;
// 	printf("person Name:: %s\n", person.name);
	
// 	t_person person2;
// 	person2.name = "Rene";
// 	person2.last_name = "Who-Khows";
// 	person2.age = 19;
// 	person2.next = NULL;
// 	// person2.prev = &person;
// 	printf("person2 Name:: %s\n", person2.name);

	
// 	t_person person3;
// 	person3.name = "Third";
// 	person3.age = 190;
// 	person3.next = NULL;
// 	printf("person3 Name:: %s\n", person2.name);
	
// 	person.next = &person2;
// 	// person2.next = &person3;

	
	
// 	printf("person.next->name:: %p\n", person.next);
// 	printf("person.next->name:: %p\n", &person2);
	// printf("person2.next->name:: %s\n", person2.next->age);
	// printf("person2.next->name:: %d\n", person2.next->age);
	// printf("person2.next->name:: %s\n", person2.next->name);
	
	// person

// 	return 0;
// }





// typedef struct s_test
// {
// 	char *name;
// 	char *last_name;
// 	int age;
// 	struct s_test *next;
// 	struct s_test *prev;
// }				t_test;


// void dele(void *param)
// {
// 	// char *str = (char *)param;
// 	// int i = 0;
// 	// while(str[i++])
// 	// 	str[i] = '\0';
// 	ft_bzero(param, ft_strlen(param));
// }



// int	main (void)
// {
// 	t_list test;
// 	test.content = "robot";

	
// 	// t_list test2;
// 	// test2.content = "robot2";
	
// 	// test.next = &test2;
// 	// printf("%s\n", test.next->content);
// 	// printf("%s\n", test.content);
// 	// ft_lstdelone(&test, dele);
// 	// printf("%s\n", test.next->name);
	
// }


int	main(void)
{
	
}