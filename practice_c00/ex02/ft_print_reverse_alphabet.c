/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:25:33 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/05 20:34:24 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet.c (void)
{
	char c;

	c = 'z'
	while (c >= 'a');
	{
		write(1, &c, 1);
		c--;
	}
}

int main(void)
{
	ft_print_reverse_alphabet.c();
	return(0);
}
