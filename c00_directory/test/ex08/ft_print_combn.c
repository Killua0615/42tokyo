/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:52:32 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/24 13:28:37 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(int *tab, int n)
{
	int		i;
	int		is_valid;
	char	c;

	is_valid = 1;
	i = 1;
	while (i < n)
	{
		if (tab[i - 1] >= tab[i])
			is_valid = 0;
		i++;
	}
	if (is_valid)
	{
		i = 0;
		while (i < n)
		{
			c = tab[i++] + '0';
			write(1, &c, 1);
		}
		if (tab[0] < (10 - n))
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	tab[9];

	if (n < 1 || n > 9)
		return ;
	i = 0;
	while (i < n)
		tab[i++] = 0;
	while (tab[0] <= (10 - n))
	{
		print_num(tab, n);
		tab[n - 1]++;
		i = n - 1;
		while (i && n > 1)
		{
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
			i--;
		}
	}
}

// int	main(void)
// {
// 	ft_print_combn(2); // 例として2桁の組み合わせ
// 	return (0);
// }
