/*
 * file name: ls1.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Wed 23 Jan 2019 03:01:19 PM CST
 */

#include <apue.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
	DIR 	*dp;
	struct dirent *dirp;

	if (argc != 2)
		err_quit("Usage: ls <directory>");
	if ((dp = opendir(argv[1])) == NULL)
		err_sys("Can't open %s", argv[1]);
	while ((dirp = readdir(dp)) != NULL)
		printf("%s\n", dirp->d_name);
	closedir(dp);
	exit(0);
}
