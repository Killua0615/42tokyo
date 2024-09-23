/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:04:39 by nateshim          #+#    #+#             */
/*   Updated: 2024/09/22 19:32:21 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc((max - min) * sizeof(int));
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (i);
}

// int	main(void)
// {
// 	int *range;
// 	int size;
// 	int i;
// 	int min = 5;
// 	int max = 10;

// 	size = ft_ultimate_range(&range, min, max);

// 	if (size > 0)
// 	{
// 		printf("Array size: %d\n", size);
// 		for (i = 0; i < size; i++)
// 		{
// 			printf("%d ", range[i]);
// 		}
// 		printf("\n");
// 		free(range);
// 	}
// 	else if (size == 0)
// 	{
// 		printf("Invalid range: min is greater than or equal to max.\n");
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed!\n");
// 	}

// 	return (0);
// }