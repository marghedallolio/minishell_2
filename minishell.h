/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:33:55 by francema          #+#    #+#             */
/*   Updated: 2025/05/07 17:03:48 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# define _POSIX_C_SOURCE 200809L
# include<unistd.h>
# include<stdio.h>
# include<stdlib.h>
# include<signal.h>
# include<fcntl.h>
# include<termios.h>
# include<errno.h>
# include<limits.h>
# include<sys/wait.h>
# include<readline/readline.h>
# include<readline/history.h>
# include <curses.h>
# include <term.h>
#include "libft/libft.h"

extern volatile sig_atomic_t sig_code;

typedef struct s_mini
{
	char	*input;
	char	**envp;
	int		pip_trick[2];
	t_list	*env;
}	t_mini;

void	ft_exit(t_mini *shell, char **args);

#endif
