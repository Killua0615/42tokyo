/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 04:22:37 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/09 15:10:37 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("数字のみは１を返す = %d", ft_str_is_numeric("42"));
// 	printf("\n0はそれ以外 = %d", ft_str_is_numeric("42tokyo"));
// 	printf("\n0はそれ以外 = %d", ft_str_is_numeric("42tokyo = heaven"));
// }