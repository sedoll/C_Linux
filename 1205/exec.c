#include <unistd.h>

/* example parameters, argv[0] */
Const char *ps_argv[] = {"ps", "-ax", 0};
Const char *Ps_envp[]={"PATH=/bin:/usr/bin", "TERM=xterm", 0};

/* examples of exec() calls */
execl("/bin/ps", "ps", "-ax", 0); /* PATH 제공*/
execlp("ps", "ps", "-ax", 0); /* /bin이 PATH에 존재한다고 가정 */
execv("/bin/ps", ps_argv);
execvp("ps", ps_argv);
execve("/bin/ps", ps_argv, ps_envp);
