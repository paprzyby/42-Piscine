/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:16:11 by paprzyby          #+#    #+#             */
/*   Updated: 2023/10/26 12:33:52 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		if ((str[l] >= 'A') && (str[l] <= 'Z'))
		{
			str[l] += 32;
		}
		l++;
	}
	return (str);
}
