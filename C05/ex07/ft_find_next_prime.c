/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:28:43 by paprzyby          #+#    #+#             */
/*   Updated: 2023/11/05 13:12:34 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	div;

	div = 2;
	if (nb < 0 || nb <= 1)
		nb = 2;
	while (div <= nb / div)
	{
		if (nb % div == 0)
		{
			nb++;
			div = 2;
		}
		else
			div++;
	}
	return (nb);
}
