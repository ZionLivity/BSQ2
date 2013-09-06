/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_to_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/02 18:44:43 by rbenjami          #+#    #+#             */
/*   Updated: 2013/09/02 18:44:43 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_string_to_int(char *c)
{
	int		i;
	int		result;

	i = 0;
	result = 0;
	while (c[i] != '\0')
	{
		result = result * 10 + c[i] - 48;
		i++;
	}
	return (result);
}

int main()
{
	char *c;
	c = "13516541651658463";
	printf("%d\n", ft_string_to_int(c) + 1);
	return (0);
}