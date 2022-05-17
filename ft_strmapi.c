/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancoi <kfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 01:45:22 by kfrancoi          #+#    #+#             */
/*   Updated: 2022/05/17 22:34:48 by kfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*sb;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	sb = malloc((len + 1) * sizeof(char));
	if (!sb)
		return (NULL);
	sb[len] = '\0';
	while (len--)
	{
		sb[len] = f(len, s[len]);
	}
	return (sb);
}
