/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:28:02 by paprzyby          #+#    #+#             */
/*   Updated: 2023/10/26 12:21:57 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		if ((str[l] >= 'a') && (str[l] <= 'z'))
		{
			str[l] -= 32;
		}
		l++;
	}
	return (str);
}
