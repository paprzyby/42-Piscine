/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:01:57 by paprzyby          #+#    #+#             */
/*   Updated: 2023/10/29 13:32:11 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	l1;
	unsigned int	l2;

	l1 = 0;
	while (dest[l1] != '\0')
	{
		l1++;
	}
	l2 = 0;
	while (src[l2] != '\0' && l2 < nb)
	{
		dest[l1] = src[l2];
		l1++;
		l2++;
	}
	dest[l1] = '\0';
	return (dest);
}
