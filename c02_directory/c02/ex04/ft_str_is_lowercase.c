/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 04:44:41 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/09 15:10:41 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("小文字のアルファベットのみは１を返す = %d", ft_str_is_lowercase("tokyo"));
// 	printf("\n0はそれ以外 = %d", ft_str_is_lowercase("42tokyo"));
// 	printf("\n0はそれ以外 = %d", ft_str_is_lowercase("42tokyo = heaven"));
// }