/*
** my_ls.c for  in /home/AmOrAA/Delivery/LS/test
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Wed Nov 30 20:44:26 2016 Florian Testu
** Last update Sun Dec  4 17:57:21 2016 Florian Testu
*/

#include "./include/my.h"

void	ls_d(int argc, char **argv)
{
  DIR	*rep;
  struct dirent *file;

  rep = NULL;
  file = NULL;
  if ((rep = opendir(argv[2])) == NULL)
    exit (84);
  file = readdir(rep);
  my_putstr(file->d_name);
  my_putchar('\n');
  closedir(rep);
}

void	ls_la(int argc, char **argv)
{
  DIR	*rep;
  struct dirent *file;
  struct stat	st;

  rep = NULL;
  file = NULL;
  if ((rep = opendir(argv[2])) == NULL)
    exit (84);
  stat(argv[2], &st);
  mod_t1(rep, file);
  while ((file = readdir(rep)) != NULL)
    {
      stat(file->d_name, &st);
      mod_t(rep, file, st);
      mod_t2(rep, file, st);
      mod_t4(rep, file, st);
      mod_t6(rep, file, st);
      mod_t5(rep, file, st);
      mod_t7(rep, file, st);
      my_printf(" %s\n", file->d_name);
    }
  closedir(rep);
}

void	ls_l(int argc, char **argv)
{
  DIR	*rep;
  struct dirent *file;
  struct stat	st;

  rep = NULL;
  file = malloc(sizeof(struct dirent));
  if ((rep = opendir(argv[2])) == NULL)
    exit (84);
  stat(".", &st);
  mod_t1(rep, file);
  while ((file = readdir(rep)) != NULL)
    {
      if ((my_strcmp(file->d_name, "..") != 0) && (file->d_name[0] != '.'))
	{
	  stat(file->d_name, &st);
	  mod_t(rep, file, st);
	  mod_t2(rep, file, st);
	  mod_t4(rep, file, st);
	  mod_t6(rep, file, st);
	  mod_t5(rep, file, st);
	  mod_t7(rep, file, st);
	  my_printf(" %s\n", file->d_name);
	}
    }
  closedir(rep);
}

void	ls(int argc, char **argv)
{
  DIR	*rep;
  struct dirent *file;

  rep = NULL;
  file = NULL;
  if ((rep = opendir(argv[1])) == NULL)
    exit (84);
  while ((file = readdir(rep)) != NULL)
    {
      if ((my_strcmp(file->d_name, "..") != 0) && (file->d_name[0] != '.'))
	{
	my_putstr(file->d_name);
	my_putstr("  ");
	}
    }
  my_putchar('\n');
  closedir(rep);
}

void	ls_a(int argc, char **argv)
{
  DIR	*rep;
  struct dirent *file;

  rep = NULL;
  file = NULL;
  if ((rep = opendir(argv[2])) == NULL)
    exit (84);
  while ((file = readdir(rep)) != NULL)
    {
      my_putstr(file->d_name);
      my_putstr("  ");
    }
  my_putchar('\n');
  closedir(rep);
}
