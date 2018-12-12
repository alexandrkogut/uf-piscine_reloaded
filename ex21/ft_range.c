/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 16:53:06 by okogut            #+#    #+#             */
/*   Updated: 2018/10/23 16:53:34 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*m;

	i = 0;
	if (min >= max)
		return (NULL);
	m = (int *)malloc(sizeof(*m) * (max - min));
	while (min < max)
	{
		m[i] = min;
		min++;
		i++;
	}
	return (m);
}
