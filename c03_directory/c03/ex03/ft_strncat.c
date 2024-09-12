/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:18:32 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/11 17:27:29 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	s;

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

// 	printf("第一引数 = %s\n", dest);
// 	printf("第二引数 = %s\n", dest);
// 	ft_strncat(dest, src, 3);
// 	printf("3文字まで結合 = %s\n", dest);
// }