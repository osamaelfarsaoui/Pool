/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 10:02:10 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/07/28 10:40:57 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while(i < nb)
	{
		if(i * i == nb)
			return (i);
		i++;
	}
	return(0);		
}
#include <stdio.h>

int main()
{
	printf("%d\n", ft_sqrt(16));
}