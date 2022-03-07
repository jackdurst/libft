/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurst <jdurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:44:43 by jdurst            #+#    #+#             */
/*   Updated: 2022/03/01 15:06:22 by jdurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	value;
	char	*str;

	len = ft_strlen(s);
	value = (char)c;
	str = (char *)s;
	while (len >= 0)
	{
		if (str[len] == value)
			return (&str[len]);
		len--;
	}
	return (NULL);
}
