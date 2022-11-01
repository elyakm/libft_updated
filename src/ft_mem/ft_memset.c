/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:48:05 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/31 11:47:57 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *str;

	str = b;
	while (len > 0)
	{
		*str = c;
		str++;
		len--;
	}
	return(b);
}

// void	*ft_memset(void *b, int c, size_t len)
// {
//     char *var = (char *)b;
//     int  i;
//     int j = ft_strlen(var);

//     i = 0;
//     while(j && len)
// 	{
// 		var[i] = (unsigned char)c;
// 		j--;
// 		len--;
// 		i++;
// 	}
//     var[i + j] = '\0';
//     return ((void *)b);
// }
