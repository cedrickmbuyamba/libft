/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 12:32:36 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/06/04 15:29:54 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	size_t	len;

	start = 0;
	len = 0;
	if (s != NULL)
	{
		while (start < ft_strlen(s) && ft_isspace(s[start]))
			start++;
		end = ft_strlen(s) - 1;
		while (end > start && ft_isspace(s[end]))
			end--;
		len = end - start + 1;
	}
	return (ft_strsub(s, start, len));
}
