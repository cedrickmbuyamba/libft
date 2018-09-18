/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:45:53 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/05/30 11:56:18 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*nv;
	int		c;

	if (!s1 || !s2)
		return (NULL);
	c = 0;
	if (!(nv = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	while (*s1)
		nv[c++] = *s1++;
	while (*s2)
		nv[c++] = *s2++;
	nv[c] = '\0';
	return (nv);
}
