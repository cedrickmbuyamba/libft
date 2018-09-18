/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 17:47:48 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/06/04 15:13:42 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		result;
	int		opera;

	i = 0;
	result = 0;
	opera = 1;
	if (str[i])
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		if (!str[i])
			return (0);
		if (str[i] == '-' || str[i] == '+')
		{
			opera = (str[i] == '-') ? -1 : 1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
			result = (result * 10) + str[i++] - '0';
	}
	return (opera * result);
}
