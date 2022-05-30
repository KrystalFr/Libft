/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfrancoi <kfrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 23:02:47 by kfrancoi          #+#    #+#             */
/*   Updated: 2022/05/30 22:09:27 by kfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

unsigned int	count_c(const char *s, char c)
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

const char	*start(const char *s, char c)
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

size_t	gap(const char *s1, const char *s2)
{
	return (s2 - s1);
}

char	**ft_split(char const *s, char c)
{
	char		**tab;
	size_t		count;
	size_t		i;
	const char	*tmp;

	count = count_c(s, c);
	tab = malloc((count + 2) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	while ((tmp[i]))
	{
		tmp = start(s, c);
		if (gap(s, tmp))
		{
			tab[i] = ft_substr(s, 0, gap(s, tmp));
			i++;
		}
		s = tmp + 1;
	}
	if (s[i] != '\0')
	{
		tab[i] = ft_strdup(s);
		tab[i + 1] = '\0';
	}
	else
		tab[i] = '\0';
	return (tab);
}

int main()
{
  char *s = "      bonsoir coucou              salut pute chienne flote     ";
  char c = ' ';
  char **tab = ft_split(s, c);
  size_t	i;

  i = 0;
  while (tab[i])
  {
	printf("%s\n", tab[i]);
	i++;
  }
  return 0;
}