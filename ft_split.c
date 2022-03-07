/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurst <jdurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:51:32 by jdurst            #+#    #+#             */
/*   Updated: 2022/03/02 17:19:56 by jdurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordlen(char const *str, char separator)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != separator)
		i++;
	return (i);
}

static int	ft_wordcount(char const *str, char separator)
{
	int	i;
	int	words;

	words = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && *str == separator)
			str++;
		i = ft_wordlen(str, separator);
		str = str + i;
		if (i != 0)
			words++;
	}
	return (words);
}

static char	*ft_wordcpy(char const *src, int n)
{
	char	*dest;

	dest = malloc(sizeof(char) * (n + 1));
	if (dest == NULL)
		return (NULL);
	dest[n] = '\0';
	while (n--)
		dest[n] = src[n];
	return (dest);
}

char	**ft_split(char const *str, char separator)
{
	char	**tab;
	int		size;
	int		i;
	int		len;

	if (!str)
		return (NULL);
	size = ft_wordcount((char *)str, separator);
	tab = malloc(sizeof(char *) * (size + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		while (*str != '\0' && *str == separator)
			str++;
		len = ft_wordlen(str, separator);
		tab[i] = ft_wordcpy(str, len);
		if (tab[i] == NULL)
			return (NULL);
		str = str + len;
		i++;
	}
	tab[size] = 0;
	return (tab);
}
