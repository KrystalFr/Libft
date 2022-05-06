/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancoi <kfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:33:55 by kfrancoi          #+#    #+#             */
/*   Updated: 2022/05/06 20:11:23 by kfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] || !c)
	{
		if (c == s[i])
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
