/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:51:02 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/05 20:55:27 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd>
void ft_is_negative(int n);
{
	if (n > 0)
	{
		write(1, 'N', 1)
	}
	else
	{
		write(1, 'P', 1)
	}
}

int main(void)
{
	ft_is_negative(1);
	return(0);
}