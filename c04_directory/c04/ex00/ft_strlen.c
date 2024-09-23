/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 07:15:07 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/21 16:29:36 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(int argc, char *argv[])
// {
// 	char *a;

// 	a = argv[1];

// 	if (argc != 2)
// 	{
// 		printf("1つの文字列を返してください");
// 		return (1);
// 	}

// 	unsigned int length = ft_strlen(a);

// 	printf("文字の長さは: %u\n", length);
// 	return (0);
// }