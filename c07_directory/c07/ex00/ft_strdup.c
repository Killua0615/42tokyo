/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:57:29 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/22 19:33:28 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;
	int		i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	*original;
// 	char	*copy;

// 	original = "Hello, World!";
// 	copy = ft_strdup(original);
// 	if (copy != NULL)
// 	{
// 		printf("オリジナル: %s\n", original);
// 		printf("コピー: %s\n", copy);
// 		free(copy);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed!\n");
// 	}
// 	return (0);
// }
