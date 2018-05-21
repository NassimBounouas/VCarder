#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <pwd.h>

int main(int argc, char ** argv)
{
	struct passwd *pw = getpwuid(getuid());

	const char *homedir = pw->pw_dir;
	printf("%s", homedir);
}
