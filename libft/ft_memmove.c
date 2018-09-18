/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 11:10:11 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/06/01 14:32:58 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *sr;
	unsigned char *ds;

	ds = (unsigned char*)dst;
	sr = (unsigned char*)src;
	if (len <= 0)
		return (dst);
	if (sr < ds)
	{
		while (len)
		{
			ds[len - 1] = sr[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
