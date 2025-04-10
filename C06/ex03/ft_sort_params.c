/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:13:13 by eferreir          #+#    #+#             */
/*   Updated: 2025/04/10 16:35:27 by eferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_params(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
		i = 0;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = 1;
        while (j < argc)
	{
		while (argv[j][i])
                {
                        i++;
                }
                j++;
                i = 0;
        }
	return 0;
}
