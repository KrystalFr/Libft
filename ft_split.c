/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancoi <kfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 23:02:47 by kfrancoi          #+#    #+#             */
/*   Updated: 2022/05/23 06:47:31 by kfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char **ft_split(char const *s, char c)
{
	size_t count;
	char **tab;

	{
		size_t i;

		i = 0;
		count = 1;
		while (s[i])
		{
			if (s[i] == c)
				count++;
			i++;
		}
	}

	tab = malloc((count + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	
	return (tab);
}

int main()
{
	char **tab = ft_split("Hello World", ' ');
	size_t index = 0;
	while (tab[index])
	{
		printf("tab[%zu] = %s\n", index, tab[index]);
		index++;
	}
	return (0);
}