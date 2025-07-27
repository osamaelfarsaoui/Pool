/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:20:17 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/07/26 18:03:44 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	x;
	unsigned char	y;

	i = 0;
	while ((i < n) && (s1[i] || s2[i]))
	{
		x = s1[i];
		y = s2[i];
		if (x != y)
			return (x - y);
		i++;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	printf("%d\n", ft_strncmp("abcd", "abc", 3));
}