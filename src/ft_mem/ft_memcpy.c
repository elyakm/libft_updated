/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamelialaksi <kamelialaksi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:57:42 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/30 16:30:38 by kamelialaks      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned	char *c_dst;
	unsigned	char *c_src;

    i = 0;
	c_dst = (unsigned char*)dst;
	c_src = (unsigned char*)src;
	if (!(dst || src))
		return (NULL);
	while ((n > i))
	{
		c_dst[i] = c_src[i];
		i++;
	}
	return (dst);
}