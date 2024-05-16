/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:26:00 by paprzyby          #+#    #+#             */
/*   Updated: 2023/11/05 16:08:30 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	square;

	square = 0;
	if ((unsigned int) nb < 0)
		return (0);
	while (square * square < (unsigned int)nb)
		square++;
	if (square * square == (unsigned int)nb)
		return (square);
	return (0);
}
