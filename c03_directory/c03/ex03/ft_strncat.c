/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:18:32 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/13 23:23:19 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	s;

	i = 0;
	s = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[s] != '\0' && s < nb)
	{
		dest[i] = src[s];
		i++;
		s++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char dest[10] = "42";
// 	char src[] = "tokyo";
// 	char dest2[20] = "42";

// 	printf("第一引数 = %s\n", dest);
// 	printf("第二引数 = %s\n", src);
// 	ft_strncat(dest, src, 3);
// 	printf("3文字まで結合 = %s\n\n", dest);
// 	strncat(dest2, src, 3);
// 	printf("実際の関数の動き = %s\n", dest2);
// }