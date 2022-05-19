/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soabbas <soabbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:51:07 by soabbas           #+#    #+#             */
/*   Updated: 2022/05/13 12:17:44 by soabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*res;
	size_t	i;

	res = (char *)s;
	i = 0;
	while (i < n)
	{
		res[i] = c;
		i++;
	}
	return (res);
}
