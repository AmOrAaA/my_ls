/*
** stat.c for  in /home/AmOrAA/Delivery/LS/test
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Thu Dec  1 14:52:50 2016 Florian Testu
** Last update Sun Jan 22 21:28:05 2017 Florian Testu
*/

#include "./include/my.h"

void 	mod_t(DIR *rep, struct dirent *file, struct stat file2)
{
  (file2.st_mode & S_IFDIR) ? my_putchar('d') : my_putchar('-');
  (file2.st_mode & S_IRUSR) ? my_putchar('r') : my_putchar('-');
  (file2.st_mode & S_IWUSR) ? my_putchar('w') : my_putchar('-');
  (file2.st_mode & S_IXUSR) ? my_putchar('x') : my_putchar('-');
  (file2.st_mode & S_IRGRP) ? my_putchar('r') : my_putchar('-');
  (file2.st_mode & S_IWGRP) ? my_putchar('w') : my_putchar('-');
  (file2.st_mode & S_IXGRP) ? my_putchar('x') : my_putchar('-');
  (file2.st_mode & S_IROTH) ? my_putchar('r') : my_putchar('-');
  (file2.st_mode & S_IWOTH) ? my_putchar('w') : my_putchar('-');
  (file2.st_mode & S_IXOTH) ? my_printf("x ") : my_printf("- ");
}

void	mod_t1(DIR *rep, struct dirent *file)
{
  unsigned int	a;
  struct stat file2;

  a = 0;
  rep = opendir(".\0");
  while ((file = readdir(rep)))
    {
      stat(file->d_name, &file2);
      if ((my_strcmp(file->d_name, "..\0") != 0) && (file->d_name[0] != '.'))
	a += file2.st_blocks;
    }
  my_printf("total %d\n", a / 2);
  closedir(rep);
}

void	mod_t2(DIR *rep, struct dirent *file, struct stat file2)
{
  my_printf("%d ", file2.st_nlink);
}
void	mod_t5(DIR *rep, struct dirent *file, struct stat file2)
{
  my_printf("%d ", file2.st_size);
}

void	mod_t3(DIR *rep, struct dirent *file, struct stat file2)
{
  my_printf("%s ", file2.st_uid);
}
