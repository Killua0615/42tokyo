/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:41:59 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/08 19:02:41 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	get_corner_char(int i)
{
	char	c[4];

	c[0] = 'A';
	c[1] = 'C';
	c[2] = 'C';
	c[3] = 'A';
	return (c[i]);
}

int	is_positive(int x, int y)
{
	if (x < 0 || y < 0)
	{
		write(1, "ERROR: x and y can only be above 0\n", 33);
		return (0);
	}
	return (1);
}

void	rush(int x, int y)
{
	int	ix;
	int	iy;
	int	ic;

	if (!is_positive(x, y))
		return ;
	ix = 0;
	iy = 0;
	ic = 0;
	while (iy < y)
	{
		while (ix < x)
		{
			if ((ix == 0 || ix == x - 1) && (iy == 0 || iy == y - 1))
				ft_putchar(get_corner_char(ic++));
			else if ((ix == 0 || ix == x - 1) || (iy == 0 || iy == y - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			ix++;
		}
		ix = 0;
		iy++;
		ft_putchar('\n');
	}
}
