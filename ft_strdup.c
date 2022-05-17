/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancoi <kfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 23:11:48 by kfrancoi          #+#    #+#             */
/*   Updated: 2022/05/17 22:43:42 by kfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*sdup;
	size_t	len;

	len = ft_strlen(s);
	sdup = malloc((len + 1) * sizeof(char));
	if (!sdup)
		return (NULL);
	ft_strlcpy(sdup, s, len + 1);
	return (sdup);
}
