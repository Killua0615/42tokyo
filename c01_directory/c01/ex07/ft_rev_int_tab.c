/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:14:49 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/09 03:07:42 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
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

// int	main(void)
// {
// 	int tab[6] = {0, 1, 2, 3, 4, 5};
// 	int size = 6;

// 	ft_rev_int_tab(tab, size);
// 	printf("配列の順を逆に = %d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3],
// 		tab[4], tab[5]);
// 	return (0);
// }