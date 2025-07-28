/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 18:22:24 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/07/27 18:22:46 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	space(char  c)
{

}

int	ft_atoi(char *str)
{
	int i;
	int	result;
	int sign;
	
	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - 48;
		i++;
	}
	return (result * sign);
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("%d\n", ft_atoi("+222"));
	printf("%d", atoi("-222"));
}