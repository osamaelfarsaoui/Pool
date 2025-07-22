/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:35:43 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/07/17 10:09:40 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	str;
	int	end;

	str = '0';
	end = '9';
	while (str <= end)
	{
		write(1, &str, 1);
		str++;
	}
}
