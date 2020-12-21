#ifndef MINISHELL_H
# define MINISHELL_H

#include "macro.h"
#include "lib.h"
#include "parser.h"
#include "env.h"

#include <sys/wait.h>

char	**g_envp;
int		redirection(char *exec, char *envp[]);
int		piping(char *command, char *envp[]);

int		cd(char *dir);

#endif