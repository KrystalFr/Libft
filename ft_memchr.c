/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancoi <kfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 22:13:29 by kfrancoi          #+#    #+#             */
/*   Updated: 2022/05/09 14:58:36 by kfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*s2;

	i = 0;
	s2 = s;
	while (i < n)
	{
		if (c == s2[i])
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
