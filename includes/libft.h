/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:46:41 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/30 21:51:31 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

long long	ft_atoi(const char *str);
int			ft_isdigit(int c);
char		**ft_split(const char *s, char c);
size_t		ft_strlen(const char *c);
char		*ft_substr(char *c, unsigned int start,size_t len);
int			ft_strncmp(const char *s1, const char *s2, size_t n);

#endif