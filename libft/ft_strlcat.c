/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:38:48 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/05/25 11:55:40 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	k;
	size_t	lg;

	lg = ft_strlen(dst);
	j = 0;
	while (dst[j])
		j++;
	k = 0;
	if (size < lg)
		return (ft_strlen(src) + size);
	if (size == lg)
		return (lg + ft_strlen(src));
	else
	{
		while (src[k] && k < size - lg - 1)
		{
			dst[j] = src[k];
			k++;
			j++;
		}
		dst[j] = '\0';
		return (lg + ft_strlen(src));
	}
}
