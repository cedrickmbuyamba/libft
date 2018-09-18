/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 10:45:22 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/05/31 13:49:33 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char const *s, char c)
{
	int		count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char		*get_next_word(const char *s, char c)
{
	size_t	dim;
	char	*word;
	int		b;

	b = 0;
	dim = ft_strlen(s);
	if (!(word = (char*)malloc(dim + 1)))
		return (NULL);
	while (*s && *s != c)
		word[b++] = *s++;
	word[b] = '\0';
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		nbrof_wd;
	int		b;

	if (!s)
		return (NULL);
	nbrof_wd = count_words(s, c);
	if (!(tab = (char**)malloc(sizeof(*tab) * (nbrof_wd + 1))))
		return (NULL);
	b = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			tab[b] = get_next_word(s, c);
			b++;
			while (*s && *s != c)
				s++;
		}
	}
	tab[b] = NULL;
	return (tab);
}
