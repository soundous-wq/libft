/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soabbas <soabbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:07:29 by soabbas           #+#    #+#             */
/*   Updated: 2022/05/13 12:15:49 by soabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest_res;
	char	*src_res;

	i = 0;
	dest_res = (char *)dest;
	src_res = (char *)src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		dest_res[i] = src_res[i];
		i++;
	}
	return (dest_res);
}
