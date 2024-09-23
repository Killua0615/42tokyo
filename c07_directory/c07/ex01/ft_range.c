/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:10:16 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/22 19:33:58 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	arr = (int *)malloc((max - min) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

// int	main(void)
// {
// 	int *range;
// 	int i;
// 	int min = 5;
// 	int max = 20;

// 	range = ft_range(min, max);

// 	if (range != NULL)
// 	{
// 		i = 0;
// 		while (i < (max - min))
// 		{
// 			printf("%d ", range[i]);
// 			i++;
// 		}
// 		printf("\n");

// 		free(range);
// 	}
// 	else
// 	{
// 		printf("Invalid range.\n");
// 	}

// 	return (0);
// }