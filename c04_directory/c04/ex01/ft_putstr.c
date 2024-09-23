/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 08:55:45 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/21 16:31:01 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

// int	main(int argc, char *argv[])
// {
// 	char	*a;

// 	if (argc != 2)
// 	{
// 		printf("1つの文字列を引数として入力してください");
// 		return (1);
// 	}
// 	a = argv[1];
// 	ft_putstr(argv[1]);
// 	return (0);
// }
