/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarques <tmarques@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:34:44 by tmarques          #+#    #+#             */
/*   Updated: 2022/09/11 16:44:40 by tmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char value);

void	rush_end(int x)
{
	int i;
	int k;

	k = x - 2;
	i = 0;
	ft_putchar('\\');
	while (i < k)
	{
		ft_putchar('*');
		i++;
	}
	if (x > 1)
		ft_putchar('/');
}

void	rush_middle(int x, int y, int z)
{
	int county;
	int count;
	int f;

	f = y - 2;
	county = 0;
	while (county < f)
	{
		count = 0;
		ft_putchar('*');
		while (count < z)
		{
			ft_putchar(' ');
			count++;
		}
		if (x > 1)
			ft_putchar('*');
		ft_putchar('\n');
		county++;
	}
}

void	rush(int x, int y)
{
	int i;
	int z;

	i = 0;
	z = x - 2;
	if (x == 0 || y == 0)
		return ;
	ft_putchar('/');
	while (i < z)
	{
		ft_putchar('*');
		i++;
	}
	if (x > 1)
		ft_putchar('\\');
	ft_putchar('\n');
	if (y > 2)
		rush_middle(x, y, z);
	if (y > 1)
		rush_end(x);
		ft_putchar('\n');
}
