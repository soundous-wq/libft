/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soabbas <soabbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:00:18 by soabbas           #+#    #+#             */
/*   Updated: 2022/05/13 12:26:49 by soabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*str;

	len = 0;
	str = (char *)s;
	while (str[len])
		len++;
	while (len > 0)
	{
		if (str[len] == (char)c)
			return (str + len);
		len--;
	}
	if (str[len] == (char)c)
		return (str + len);
	return (NULL);
}
