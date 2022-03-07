/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurst <jdurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:23:43 by jdurst            #+#    #+#             */
/*   Updated: 2022/03/02 14:40:37 by jdurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size_s1;
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size_s1 = ft_strlen(s1);
	while (size_s1 && ft_strchr(set, s1[size_s1]))
		size_s1--;
	dest = ft_substr((char *)s1, 0, size_s1 + 1);
	return (dest);
}
