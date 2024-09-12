/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:36:37 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/11 15:47:29 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	i;

	i = 'n';
	if (n > 0)
	{
		i = 'N';
		write(1, &i, 1);
	}
	else
	{
		i = 'P';
		write(1, &i, 1);
	}
}

int	main(void)
{
	ft_is_negative(-1);
	ft_is_negative(6);
	return (0);
}