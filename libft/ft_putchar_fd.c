/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 11:58:56 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/06/01 16:49:27 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	int uni[2];

	ft_memcpy(uni, "\u00F8", 2);
	if (ft_isascii(c))
		write(fd, &c, 1);
	else
	{
		uni[1] = c;
		write(fd, &uni, 2);
	}
}
