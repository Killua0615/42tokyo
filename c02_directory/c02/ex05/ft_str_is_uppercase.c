/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 04:48:54 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/09 15:10:44 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("大文字のアルファベットのみは１を返す = %d", ft_str_is_uppercase("TOKYO"));
// 	printf("\n0はそれ以外 = %d", ft_str_is_uppercase("42tokyo"));
// 	printf("\n0はそれ以外 = %d", ft_str_is_uppercase("42tokyo = heaven"));
// }