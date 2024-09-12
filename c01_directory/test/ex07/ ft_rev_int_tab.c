/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_rev_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 01:49:42 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/13 03:05:22 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}

int	main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
	int size;

	size = 5;

	ft_sort_int_tab(a, size);
	printf("配列の順を逆に = %d, %d, %d, %d, %d\n", a[0], a[1], a[2], a[3], a[4]);
	return (0);
}