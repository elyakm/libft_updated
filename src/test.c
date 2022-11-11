/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:46:06 by klaksi            #+#    #+#             */
/*   Updated: 2022/11/11 13:47:55 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

// typedef struct s_person
// {
// 	char *name;
// 	char *adress;
	
// } t_person;

// int main(void)
// {
// 	t_person *no_one;
// 	no_one = malloc(sizeof(t_person));
// 	no_one->name = "yeah";
// 	no_one->adress = "fc";
// 	printf("%s\n", no_one->adress);
// }





typedef struct s_person
{
	char *name;
	char *adress;
	struct s_person *next;
	struct s_person *prev;

} t_person;

int main(void)
{
	t_person person1;
	person1.name = "kam";
	person1.adress = "dunno";
	person1.next = NULL;
	
	t_person person2;
	person2.name = "mak";
	person2.adress = "nulpart";
	person2.next = NULL;
	
	person1.next = &person2;
	person2.prev = &person1;
	printf("%s\n", person2.adress);
}
