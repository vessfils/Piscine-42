/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 10:14:37 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/26 10:45:49 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int checkdouble (char *str, char c, int pos)
{
	int i;
	i = 0;

	while (i < pos)
	{
		
			if (str[i] == c)
				return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int main (int ac, char **av)
{
	int i;
	int j;

	i = 0;
	if (ac == 3)
	{
	while (av[1][i])
	{
		j = 0;
		while (av[2][j])
		{

			if (av[1][i] == av[2][j] && checkdouble(av[1], av[1][i], i))
			{


					 (write(1, &av[1][i], 1));

					break;
			}
			j++;
		}

		i++;
	}

}
	write(1, "\n", 1);
	return (0);
}
