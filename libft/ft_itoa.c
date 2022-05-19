/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soabbas <soabbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:31:00 by soabbas           #+#    #+#             */
/*   Updated: 2022/05/13 12:10:04 by soabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_len(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nbr;
	char	*result;

	nbr = n;
	len = check_len(nbr);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	len--;
	if (nbr < 0)
	{
		result[0] = '-';
		nbr *= (-1);
	}
	if (nbr == 0)
		result[0] = '0';
	while (nbr > 0)
	{
		result[len] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (result);
}
