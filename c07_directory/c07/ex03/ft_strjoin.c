/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:10:30 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/22 19:37:36 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	calculate_total_length(int size, char **strs, char *sep)
{
	int	total_length;
	int	sep_length;
	int	i;

	total_length = 0;
	sep_length = ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			total_length += sep_length;
		}
		i++;
	}
	return (total_length);
}

void	copy_string(char *dest, char *src, int *c)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[(*c)++] = src[j++];
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_length;
	char	*s;
	int		c;
	int		i;

	total_length = calculate_total_length(size, strs, sep);
	s = malloc(total_length + 1);
	if (!s)
	{
		return (NULL);
	}
	c = 0;
	i = 0;
	while (i < size)
	{
		copy_string(s, strs[i], &c);
		if (i < size - 1)
		{
			copy_string(s, sep, &c);
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}

// int	main(void)
// {
// 	char *tab[4];
// 	char *result;

// 	tab[0] = "Hi";
// 	tab[1] = "I'm";
// 	tab[2] = "really";
// 	tab[3] = "excited!";
// 	result = ft_strjoin(4, tab, " ");
// 	if (result)
// 	{
// 		printf("%s\n", result);
// 		free(result);
// 	}
// 	return (0);
// }