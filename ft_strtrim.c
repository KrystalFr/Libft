/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krfranco <krfranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:01:16 by krfranco          #+#    #+#             */
/*   Updated: 2023/11/09 14:02:50 by krfranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[len - 1]))
		len--;
	return (ft_substr(s1, i, len - i));
}
