/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 22:03:19 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/11 12:40:47 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else if (n > 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "Z", 1); // `n` が 0 の場合の処理を追加
	}
}

int	main(void)
{
	ft_is_negative(-1);
	ft_is_negative(1);
	ft_is_negative(0);
	ft_is_negative('a');
	return (0);
}