/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krfranco <krfranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:28:33 by krfranco          #+#    #+#             */
/*   Updated: 2023/11/08 03:03:14 by krfranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	s += start;
	ft_strlcpy(sub, s, len + 1);
	return (sub);
}

