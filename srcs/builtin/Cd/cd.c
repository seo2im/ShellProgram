#include "minishell.h"

int cd(char *dir)
{
	char	pwd[260];

	ft_strcpy(pwd, "PWD=");
	if (chdir(dir))
	{
		ft_write(2, "cd: ");
		ft_write(2, dir);
		ft_write(2, ": ");
		ft_write_n(2, strerror(errno));
		g_last_ret = 1;
		return (FALSE);
	}
	if (!getcwd(pwd + 4, 255))
	{
		ft_write(2, "cd: ");
		ft_write(2, dir);
		ft_write(2, ": ");
		ft_write_n(2, strerror(errno));
		g_last_ret = 1;
		return (FALSE);
	}		
	set_env(g_envp, pwd);
	g_last_ret = 0;
	return (TRUE);
}