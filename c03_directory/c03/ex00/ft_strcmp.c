/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:10:52 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/11 17:25:23 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char	str1[] = "apple";
// 	char	str2[] = "ringo";
// 	char	str3[] = "apple";

// 	printf("比較結果 (apple, ringo): %d\n", ft_strcmp(str1, str2));
// 	printf("比較結果 (apple, apple): %d\n", ft_strcmp(str1, str3));
// 	return (0);
// }