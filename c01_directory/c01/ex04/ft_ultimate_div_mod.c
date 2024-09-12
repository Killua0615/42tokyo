/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:57:08 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/09 03:07:30 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int	main(void)
// {
// 	int x;
// 	int y;

// 	x = 15;
// 	y = 3;
// 	ft_ultimate_div_mod(&x, &y);
// 	printf("割り算 = %d\n", x);
// 	printf("余り = %d\n", y);
// }