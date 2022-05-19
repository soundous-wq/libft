/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soabbas <soabbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:03:36 by soabbas           #+#    #+#             */
/*   Updated: 2022/05/19 14:48:16 by soabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_res;
	const char	*src_res;

	dest_res = (char *)dest;
	src_res = (const char *)src;
	if (dest_res < src_res)
		ft_memcpy(dest_res, src_res, n);
	else
	{
		while (n > 0)
		{
			dest_res[n - 1] = src_res[n - 1];
			n--;
		}
	}
	return (dest_res);
}