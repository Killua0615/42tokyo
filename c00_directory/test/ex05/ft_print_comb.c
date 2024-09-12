/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:47:53 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/11 16:44:50 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(void)
{
	char	f;
	char	s;
	char	t;

	f = '0';
	while (f <= '7')
	{
		s = f + 1;
		while (s <= '8')
		{
			t = s + 1;
			while (t <= '9')
			{
				write(1, &f, 1);
				write(1, &s, 1);
				write(1, &t, 1);
				if (f != '9' || s != '8' || t != '7')
				{
					write(1, ", ", 2);
				}
				t++;
			}
			s++;
		}
		f++;
	}
}

int	main(void)
{
	ft_print();
	return (0);
}