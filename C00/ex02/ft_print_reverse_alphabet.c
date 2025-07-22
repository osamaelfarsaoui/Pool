/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:39:15 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/07/17 10:09:51 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	a;
	char	z;

	a = 'a';
	z = 'z';
	while (z >= a)
	{
		write(1, &z, 1);
		z--;
	}
}
