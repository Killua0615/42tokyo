/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:24:04 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/11 17:26:33 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}

// int	main(void)
// {
// 	char str1[] = "42tokyo";
// 	char str2[] = "42SiliconValley";
// 	char str3[] = "42tokyo";

// 	printf("比較結果 (42tokyo, 42SiliconValley, 3文字まで): %d\n", ft_strncmp(str1,
// 			str2, 3));
// 	printf("比較結果 (42tokyo, 42SiliconValley, 5文字まで): %d\n", ft_strncmp(str1,
// 			str2, 5));
// 	printf("比較結果 (42tokyo, 42tokyo, 5文字まで): %d\n", ft_strncmp(str1, str3, 5));
// 	return (0);
// }