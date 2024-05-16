/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:09:33 by paprzyby          #+#    #+#             */
/*   Updated: 2023/11/08 14:35:21 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		k;

	result = (char *)malloc(sizeof(strs));
	j = 0;
	k = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i] != '\0')
		{
			result[k] = strs[j][i];
			k++;
			i++;
		}
		i = 0;
		while (j != size - 1 && sep[i])
			result[k++] = sep[i++];
		j++;
	}
	result[k] = '\0';
	return (result);
}
