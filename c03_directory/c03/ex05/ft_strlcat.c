/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 03:00:54 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/15 06:07:55 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlen(const char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// int	main(int argc, char *argv[])
// {
// 	int				i;
// 	unsigned int	result;
// 	char			*a;
// 	char			d[100];

// 	if (argc != 4)
// 	{
// 		printf("2つの文字列と数字を引数として入力してください\n");
// 		return (1);
// 	}
// 	a = argv[1];
// 	i = 0;
// 	while (a[i] != '\0')
// 	{
// 		d[i] = a[i];
// 		i++;
// 	}
// 	d[i] = '\0';
// 	result = ft_strlcat(d, argv[2], atoi(argv[3]));
// 	printf("連結後の長さ: %u\n", result);
// 	printf("連結後の文字列: %s\n", d);
// 	return (0);
// }
