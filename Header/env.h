#ifndef ENV_H
# define ENV_H

#include "lib.h"

char	**init_envp(char *old_envp[]);
char	*get_env(char *envp[], char *key);
int		set_env(char *envp[], char *env_string);

#endif