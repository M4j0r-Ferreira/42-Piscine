/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:04:32 by eferreir          #+#    #+#             */
/*   Updated: 2025/04/10 16:31:41 by eferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (argc > j)
	{
		while (argv[argc - 1][i])
		{
			write(1, &argv[argc - 1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		argc--;
		i = 0;
	}
	return (0);
}
