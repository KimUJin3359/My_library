/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojikim <woojikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 10:56:33 by woojikim          #+#    #+#             */
/*   Updated: 2020/12/22 12:40:49 by woojikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_size(char const *s, char c)
{
	int size;
	int i;

	size = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			size++;
		i++;
	}
	return (size);
}

static void	ft_free(char **word, int i)
{
	int j;

	j = 0;
	while (j < i)
	{
		free(word[j]);
		j++;
	}
	free(word);
}

static int	ft_malloc(char **word, char const *s, char c)
{
	int w_i;
	int w_s;
	int i;

	w_i = 0;
	w_s = 0;
	i = -1;
	while (s[++i])
		if (s[i] != c)
		{
			w_s++;
			if (s[i + 1] == c || s[i + 1] == 0)
			{
				if (!(word[w_i] = (char *)malloc(sizeof(char) * (w_s + 1))))
				{
					ft_free(word, w_i);
					return (0);
				}
				w_i++;
				w_s = 0;
			}
		}
	word[w_i] = 0;
	return (1);
}

static void	ft_insert(char **word, char const *s, char c)
{
	int w_i;
	int w_s;
	int i;

	w_i = 0;
	w_s = 0;
	i = -1;
	while (s[++i])
		if (s[i] != c)
		{
			word[w_i][w_s] = s[i];
			w_s++;
			if (s[i + 1] == c || s[i + 1] == 0)
			{
				word[w_i][w_s] = 0;
				w_i++;
				w_s = 0;
			}
		}
}

char		**ft_split(char const *s, char c)
{
	char	**word;
	int		w_size;

	w_size = ft_word_size(s, c);
	if (!(word = (char **)malloc(sizeof(char *) * (w_size + 1))))
		return (NULL);
	if (!(ft_malloc(word, s, c)))
		return (NULL);
	ft_insert(word, s, c);
	return (word);
}
