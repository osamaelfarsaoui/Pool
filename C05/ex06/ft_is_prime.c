/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:13:43 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/07/28 11:52:44 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while(i * i <= nb)
	{
		if(nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int	main()
{
	printf("%d\n", ft_is_prime(8));
}