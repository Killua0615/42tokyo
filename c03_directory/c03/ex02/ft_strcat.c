/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:29:43 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/11 17:27:07 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[s] != '\0')
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
// 	char	dest[10] = "42";
// 	char	src[] = "tokyo";

// 	printf("第一引数 = %s\n", dest);
// 	printf("第二引数 = %s\n", src);
// 	ft_strcpy(dest, src);
// 	printf("結合 = %s\n", dest);
// }
