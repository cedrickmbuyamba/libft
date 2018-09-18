/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:19:03 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/05/29 16:33:43 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t lengh;

	i = 0;
	lengh = ft_strlen(needle);
	if (lengh == 0)
		return ((char*)haystack);
	while ((haystack[i]) && (i + lengh <= len))
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (j == lengh - 1)
				return ((char*)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
