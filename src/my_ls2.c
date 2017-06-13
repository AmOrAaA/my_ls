/*
** my_ls2.c for  in /home/AmOrAA/Delivery/LS/PSU_2016_my_ls
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Fri Dec  2 22:07:05 2016 Florian Testu
** Last update Thu Dec 15 15:00:41 2016 Florian Testu
*/

#include "./include/my.h"

void     ls2(int argc, char **argv)
{
  DIR   *rep;
  struct dirent *file;

  rep = NULL;
  file = NULL;
  if ((rep = opendir(".") == NULL))
    exit (84);
  rep = opendir(".");
  while ((file = readdir(rep)) != NULL)
    {
      if ((my_strcmp(file->d_name, "..") != 0) && (file->d_name[0] != '.'))
	{
	  my_putstr(file->d_name);
	  my_putstr("  ");
	}
    }
  my_putchar('\n');
}

void     ls2_a(int argc, char **argv)
{
  DIR   *rep;
  struct dirent *file;

  rep = NULL;
  file = NULL;
  if ((rep = opendir(".")) == NULL)
    exit (84);
  while ((file = readdir(rep)) != NULL)
    {
      my_putstr(file->d_name);
      my_putstr("  ");
    }
  my_putchar('\n');
}

void     ls2_l(int argc, char **argv)
{
  DIR   *rep;
  struct dirent *file;
  struct stat   st;

  rep = NULL;
  file = NULL;
  if ((rep = opendir(".")) == NULL)
    exit (84);
  stat(".", &st);
  mod_t1(rep, file);
  rep = opendir(".");
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
}

void    ls2_d(int argc, char **argv)
{
  DIR   *rep;
  struct dirent *file;

  rep = NULL;
  file = NULL;
  if ((rep = opendir(".")) == NULL)
    exit (84);
  file = readdir(rep);
  my_putstr(file->d_name);
  my_putchar('\n');
}

void    ls2_la(int argc, char **argv)
{
  DIR   *rep;
  struct dirent *file;
  struct stat   st;

  rep = NULL;
  file = NULL;
  if ((rep = opendir(".")) == NULL)
    exit (84);
  stat(".", &st);
  mod_t1(rep, file);
  rep = opendir(".");
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
