/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 03:26:00 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/09 15:10:22 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char src[] = "tokyo";
// 	char ft_dest[10];
// 	char std_dest[10];

// 	printf("元の文字列: %s\n\n", src);

// 	// 3文字コピー
// 	ft_strncpy(ft_dest, src, 3);
// 	strncpy(std_dest, src, 3);
// 	printf("ft_strncpy (3文字コピー): '%s'\n", ft_dest);
// 	printf("strncpy (3文字コピー): '%s'\n", std_dest);

// 	// 5文字コピー
// 	ft_strncpy(ft_dest, src, 5);
// 	strncpy(std_dest, src, 5);
// 	printf("ft_strncpy (5文字コピー): '%s'\n", ft_dest);
// 	printf("strncpy (5文字コピー): '%s'\n", std_dest);

// 	// 7文字コピー
// 	ft_strncpy(ft_dest, src, 7);
// 	strncpy(std_dest, src, 7);
// 	printf("ft_strncpy (7文字コピー): '%s'\n", ft_dest);
// 	printf("strncpy (7文字コピー): '%s'\n", std_dest);

// 	return (0);
// }