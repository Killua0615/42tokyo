/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:52:02 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/14 20:00:45 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 確認と出力している

#include <unistd.h>

void	ft_putchar(char c);
int		ckall(int (*puzzle)[4], int (*number)[4]);

int	isvalid(int (*puzzle)[4])
		// 58行目のif (isvalid (puzzle = 1) で呼び出されて稼働(行と列に同じ数字が入っていないかの確認)
{
	int	row;
	int	col;
	int	i;

	row = -1;
	while (++row < 4)
	{
		col = -1;
		while (++col < 4)
		{
			i = -1;
			while (++i < 4)
			{
				if (i != col && puzzle[row][i] == puzzle[row][col])
					return (0);
			}
			i = -1;
			while (++i < 4)
			{
				if (i != row && puzzle[i][col] == puzzle[row][col])
					return (0);
			}
		}
	}
	return (1);
}

void	check(int (*puzzle)[4], int (*number)[4], int *success)
{
	int i;
	int j;
	char c;

	i = -1;
	if (ckall(puzzle, number) == 1) // コマンドライン引数で指定されたものと生成した盤面が合致しているか
	{
		if (isvalid(puzzle) != 1) //
			return ;
		while (++i < 4) //条件が満たしていた時に出力
		{
			j = -1;
			while (++j < 4)
			{
				c = puzzle[i][j] + '0';
				write(1, &c, 1);
				if (j != 3)
					ft_putchar(' ');
			}
			ft_putchar('\n');
			*success = 1;
		}
	}
	else
		return ;
}