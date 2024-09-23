/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ckall.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:31:06 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/14 20:09:02 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//コマンドライン引数で指定されたものと生成した盤面が合致しているか
//色々な角度から正しいか見ている
// maxが更新されるとcountが増える

int	check_coldown(int (*puzzle)[4], int (*number)[4])
{
	int	i;
	int	j;
	int	max;
	int	count;

	j = 0;
	while (j < 4)
	{
		count = 1;
		i = 3;
		max = puzzle[i][j];
		while (i >= 0)
		{
			if (max < puzzle[i][j])
			{
				max = puzzle[i][j];
				count++;
			}
			i--;
		}
		if (count != number[1][j])
			return (0);
		j++;
	}
	return (1);
}

int	check_colup(int (*puzzle)[4], int (*number)[4])
{
	int	i;
	int	j;

	int max;   ///ビルの現時点での最大値
	int count; //見えるビルの本数
	j = 0;
	while (j < 4)
	{
		count = 1;
		i = 0;
		max = puzzle[i][j];
		while (i < 4)
		{
			if (max < puzzle[i][j])
			{
				max = puzzle[i][j];
				count++;
			}
			i++;
		}
		if (count != number[0][j]) //間違った場合は0が返される
			return (0);
		j++;
	}
	return (1);
}

int	check_rowleft(int (*puzzle)[4], int (*number)[4])
{
	int	i;
	int	j;
	int	max;
	int	count;

	i = 0;
	while (i < 4)
	{
		count = 1;
		max = puzzle[i][0];
		j = 0;
		while (j < 4)
		{
			if (max < puzzle[i][j])
			{
				max = puzzle[i][j];
				count++;
			}
			j++;
		}
		if (count != number[2][i])
			return (0);
		i++;
	}
	return (1);
}

int	check_rowright(int (*puzzle)[4], int (*number)[4])
{
	int	i;
	int	j;
	int	max;
	int	count;

	j = 0;
	while (j < 4)
	{
		count = 1;
		max = puzzle[j][3];
		i = 3;
		while (i >= 0)
		{
			if (max < puzzle[j][i])
			{
				max = puzzle[j][i];
				count++;
			}
			i--;
		}
		if (count != number[3][j])
			return (0);
		j++;
	}
	return (1);
}

int	ckall(int (*puzzle)[4], int (*number)[4]) //まとめ
{
	if (check_rowleft(puzzle, number) == 1 && check_rowright(puzzle,
			number) == 1 && check_colup(puzzle, number) == 1
		&& check_coldown(puzzle, number) == 1) //条件が全て揃ったら1を返す
		return (1);
	else
		return (0); //間違えていたら0を返す
}