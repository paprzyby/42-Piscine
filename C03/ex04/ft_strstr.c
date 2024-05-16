/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:46:01 by paprzyby          #+#    #+#             */
/*   Updated: 2023/10/31 15:35:12 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	l1;
	int	l2;

	l1 = 0;
	l2 = 0;
	if (to_find[l2] == '\0')
		return (str);
	while (str[l1] != '\0')
	{
		while ((str[l1 + l2] == to_find[l2]) && (str[l1 + l2] != '\0'))
			l2++;
		if (to_find[l2] == '\0')
			return (str + l1);
		l1++;
		l2 = 0;
	}
	return (0);
}
