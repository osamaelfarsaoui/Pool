/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 09:42:51 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/07/26 17:06:54 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned char	x;
	unsigned char	y;

	i = 0;
	while (s1[i] || s2[i])
	{
		x = s1[i];
		y = s2[i];
		if (x != y)
			return (x - y);
		i++;
	}
	return (0);
}
