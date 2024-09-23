/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 09:23:39 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/21 16:51:19 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

// int	main(int argc, char *argv[])
// {
// 	int	result;

// 	if (argc != 2)
// 	{
// 		printf("1つの文字列を引数として入力してください\n");
// 		return (1);
// 	}
// 	result = ft_atoi(argv[1]);
// 	printf("%d\n", result);
// 	return (0);
// }

// int	main(void)
// {
// 	const char	*str = "---+--+1234ab567";
// 	int			result;

// 	result = ft_atoi(str);
// 	printf("%d\n", result);
// 	return (0);
// }
