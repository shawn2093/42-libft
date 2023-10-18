/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:06:39 by long              #+#    #+#             */
/*   Updated: 2023/10/18 12:05:40 by long             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s11, const char *s22, unsigned int n)
{
	unsigned int count;
	char	*s1;
	char	*s2;

	count = 0;
	s1 = (char *)s11;
	s2 = (char *)s22;
	while (s1[count] != '\0' && s2[count] != '\0' && count < n)
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	if (count != n)
		return (s1[count] - s2[count]);
	return (0);
}