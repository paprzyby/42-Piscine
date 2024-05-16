/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:05:17 by paprzyby          #+#    #+#             */
/*   Updated: 2023/11/08 14:35:10 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	result;
	int	*number;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	result = max - min;
	number = malloc(result * sizeof(int));
	*range = number;
	while (i < result)
	{
		number[i] = min + i;
		i++;
	}
	return (result);
}
