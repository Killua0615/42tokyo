/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:40:34 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/14 21:46:47 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check(int (*matrix)[4], int (*number)[4], int *sucess);
void	generate(int (*matrix)[4], int (*number)[4], int row, int *success);

// 1回回すと1行できる
void	generate_row(int (*matrix)[4], int (*number)[4], int row, int *success)
// 4
{
	int d;

	d = 1;
	while (d <= 4)
	{
		matrix[row][3] = d;                         // 4文字目を当てはめる
		generate(matrix, number, row + 1, success); // generateに以降して２行目の作成に移る
		d++;
	}
}

void	generate_c(int (*matrix)[4], int (*number)[4], int row, int *success)
//行の3文字目の作成
{
	int c;

	c = 1;
	while (c <= 4)
	{
		matrix[row][2] = c;                         // 3文字目を当てはめる
		generate_row(matrix, number, row, success); // generate_rowに移動
		c++;
	}
}

void	generate_b(int (*matrix)[4], int (*number)[4], int row, int *success)
//行の2文字目の作成
{
	int b;

	b = 1;
	while (b <= 4)
	{
		matrix[row][1] = b;                       // 2文字目を当てはめる
		generate_c(matrix, number, row, success); // generate_cに移動
		b++;
	}
}

void	generate(int (*matrix)[4], int (*number)[4], int row, int *success)
//行の1文字目の作成
{
	int a;

	if (row == 4)
	{
		check(matrix, number, success);
		return ;
	}
	a = 1;
	while (a <= 4)
	{
		matrix[row][0] = a;                       // 1文字目を当てはめる
		generate_b(matrix, number, row, success); // generate_bに移動
		a++;
	}
}