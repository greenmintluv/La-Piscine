/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 08:08:55 by yejang            #+#    #+#             */
/*   Updated: 2025/08/11 10:55:47 by yejang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	if (size <= 1)
	{
		return ;
	}
	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size -1 - i] = tmp;
		i++;
	}
}
/*
void	putnbr(int n)
{
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	i;

	ft_rev_int_tab(tab, 5);
	i = 0;
	while (i < 5)
	{
		putnbr(tab[i]);
		if (i < 4)
			write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
