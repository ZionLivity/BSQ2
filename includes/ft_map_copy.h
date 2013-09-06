/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_copy.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbenjami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/02 13:01:33 by rbenjami          #+#    #+#             */
/*   Updated: 2013/09/02 13:01:34 by rbenjami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_COPY
# define MAP_COPY

void	ft_count_clone_file(map *mp, int *fd, char *buf, int ret);
void	ft_open(int *fd, char *av, map *mp);
map	ft_map_copy(char *av, int ac);

#endif
