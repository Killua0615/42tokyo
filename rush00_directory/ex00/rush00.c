/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:55:07 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/08 20:40:25 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	get_corner_char(int ix, int iy, int x, int y)
{
	if (ix == 0 && iy == 0)
		return ('o');
	if (ix == x - 1 && iy == 0)
		return ('o');
	if (ix == 0 && iy == y - 1)
		return ('o');
	if (ix == x - 1 && iy == y - 1)
		return ('o');
	return (0);
}

int	is_positive(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "ERROR: x and y must be positive\n", 33);
		return (0);
	}
	return (1);
}

void	rush(int x, int y)
{
	int	ix;
	int	iy;

	if (!is_positive(x, y))
		return ;
	iy = 0;
	while (iy < y)
	{
		while (ix < x)
		{
			if ((ix == 0 || ix == x - 1) && (iy == 0 || iy == y - 1))
				ft_putchar(get_corner_char(ix, iy, x, y));
			else if (iy == 0 || iy == y - 1)
				ft_putchar('-');
			else if (ix == 0 || ix == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			ix++;
		}
		ix = 0;
		iy++;
		ft_putchar('\n');
	}
}
