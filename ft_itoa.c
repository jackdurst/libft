/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurst <jdurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:15:01 by jdurst            #+#    #+#             */
/*   Updated: 2022/03/02 17:31:32 by jdurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenght(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*processing(char *dest, long nb, int i)
{
	dest[i--] = '\0';
	if (nb == 0)
	{
		dest[0] = '0';
		return (dest);
	}
	if (nb < 0)
	{
		nb *= -1;
		dest[0] = '-';
	}
	while (nb > 0)
	{
		dest[i] = 48 + (nb % 10);
		nb = nb / 10;
		i--;
	}
	return (dest);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		i;
	long	nb;

	nb = n;
	i = lenght(nb);
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	dest = processing(dest, nb, i);
	return (dest);
}
