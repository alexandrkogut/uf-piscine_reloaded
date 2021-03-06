/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 17:01:35 by okogut            #+#    #+#             */
/*   Updated: 2018/10/23 17:01:58 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int mem;

	i = 0;
	mem = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			mem++;
		i++;
	}
	return (mem);
}
