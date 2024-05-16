/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:21:35 by paprzyby          #+#    #+#             */
/*   Updated: 2023/11/08 14:34:47 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*result;

	i = 0;
	if (min >= max)
		return (0);
	range = max - min;
	result = malloc(range * sizeof(int));
	while (i < range)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
