/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 16:49:51 by okogut            #+#    #+#             */
/*   Updated: 2018/10/23 16:51:03 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **argv, int k)
{
	char	*n;

	n = argv[k];
	argv[k] = argv[k + 1];
	argv[k + 1] = n;
}

int		main(int argc, char **argv)
{
	int		i;
	int		k;

	i = 0;
	k = 1;
	if (argc > 2)
	{
		while (k < argc - 1)
		{
			if (ft_strcmp(argv[k], argv[k + 1]) > 0)
			{
				ft_swap(argv, k);
				k = 0;
			}
			k++;
		}
	}
	k = 1;
	while (k < argc)
	{
		ft_putstr(argv[k]);
		ft_putchar('\n');
		k++;
	}
	return (0);
}
