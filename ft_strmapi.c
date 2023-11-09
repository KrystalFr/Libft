/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krfranco <krfranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:11:45 by krfranco          #+#    #+#             */
/*   Updated: 2023/11/09 15:02:33 by krfranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*tab;
	int		i;

	tab = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		tab[i] = (*f)(s[i]);
		i++;
	}
	tab[i] '\0';
	return (tab);
}
