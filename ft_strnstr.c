/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krfranco <krfranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:59:31 by krfranco          #+#    #+#             */
/*   Updated: 2023/11/07 19:38:35 by krfranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!little)
		return ((char *)big);
	while (big[i])
	{
		if (ft_strncmp(&big[i], little, len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
