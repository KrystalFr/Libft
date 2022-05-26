/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancoi <kfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 23:02:47 by kfrancoi          #+#    #+#             */
/*   Updated: 2022/05/26 07:24:54 by kfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

unsigned int	count_c(char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	*starting_point(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}

size_t	gap(char *s1, char *s2)
{
	return (s2 - s1);
}

void	loop(char *s, char c)
{
	char *tmp;

	while ((tmp = starting_point(s, c)))
	{
		printf("%ld\n", gap(s, tmp));
		s = tmp + 1;
	}
}
/*char **ft_split(char const *s, char c)
{

}*/

int main()
{
  char *str = "bonsoir coucou salut pute chienne flote";
  char c = 'o';

  loop(str, c);
  return 0;
}