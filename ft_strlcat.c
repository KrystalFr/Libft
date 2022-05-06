/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancoi <kfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 18:56:01 by kfrancoi          #+#    #+#             */
/*   Updated: 2022/05/06 19:53:58 by kfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(dest);
	if (len < size)
		return (len + ft_strlcpy(dest + len, src, size - len));
	return (size + ft_strlen(src));
}
