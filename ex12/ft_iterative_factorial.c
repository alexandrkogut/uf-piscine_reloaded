/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 16:42:09 by okogut            #+#    #+#             */
/*   Updated: 2018/10/23 16:42:32 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int k;

	k = nb;
	if (k == 0 || k == 1)
		return (1);
	else if (k < 0 || k > 12)
		return (0);
	while (k > 1)
	{
		k--;
		nb *= k;
	}
	return (nb);
}
