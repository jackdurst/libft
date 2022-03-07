/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:28:01 by anonymou          #+#    #+#             */
/*   Updated: 2022/03/01 14:40:04 by jdurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned int	tsize;
	unsigned int	i;
	char			*dest;

	dest = malloc(size * nmemb);
	if (dest == NULL)
		return (NULL);
	i = 0;
	tsize = nmemb * size;
	while (tsize--)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
