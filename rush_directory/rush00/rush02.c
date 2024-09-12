/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:50:56 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/08 14:29:56 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	get_corner_char(int ix, int iy, int x, int y)
{
	if (ix == 0 && iy == 0)
		return ('A'); // 左上
	if (ix == x - 1 && iy == 0)
		return ('A'); // 右上
	if (ix == 0 && iy == y - 1)
		return ('C'); // 左下
	if (ix == x - 1 && iy == y - 1)
		return ('C'); // 右下
	return ('B');     // 縁の他の部分
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
	int ix;
	int iy;

	if (!is_positive(x, y))
		return ;
	for (iy = 0; iy < y; iy++)
	{
		for (ix = 0; ix < x; ix++)
		{
			// コーナー部分の処理
			if ((ix == 0 || ix == x - 1) && (iy == 0 || iy == y - 1))
				ft_putchar(get_corner_char(ix, iy, x, y)); // 正しい引数を渡す
			// 上下の縁の処理
			else if (iy == 0 || iy == y - 1)
				ft_putchar('B');
			// 左右の縁の処理
			else if (ix == 0 || ix == x - 1)
				ft_putchar('B');
			// 内部のスペースの処理
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}