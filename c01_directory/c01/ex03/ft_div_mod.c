/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 22:03:54 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/13 00:50:36 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// int	main(void)
// {
// 	int a;
// 	int b;
// 	int x;
// 	int y;

// 	a = 10;
// 	b = 5;
// 	ft_div_mod(a, b, &x, &y);
// 	printf("商 = %d\n", x);
// 	printf("余り = %d", y);
// }