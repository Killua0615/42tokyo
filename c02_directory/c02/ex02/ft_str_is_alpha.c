/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 04:14:32 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/09 15:10:32 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a'
				&& str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	printf("英語のみは１を返す = %d", ft_str_is_alpha("paris"));
// 	printf("\n0はそれ以外 = %d", ft_str_is_alpha("42tokyo"));
// 	printf("\n0はそれ以外 = %d", ft_str_is_alpha("42tokyo = heaven"));
// }