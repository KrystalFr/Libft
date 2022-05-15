/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancoi <kfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 23:58:57 by kfrancoi          #+#    #+#             */
/*   Updated: 2022/05/16 01:28:39 by kfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	litlen;

	i = 0;
	litlen = ft_strlen(little);
	if (len == 0)
		return ((char *)&big[i]);
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] && i < len - litlen)
	{
		if (ft_strncmp(&big[i], little, litlen) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
