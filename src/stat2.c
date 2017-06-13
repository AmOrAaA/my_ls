/*
** stat2.c for  in /home/AmOrAA/Delivery/LS/PSU_2016_my_ls
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Fri Dec  2 21:13:33 2016 Florian Testu
** Last update Sun Dec  4 17:59:09 2016 Florian Testu
*/

#include "./include/my.h"

void    mod_t4(DIR *rep, struct dirent *file, struct stat file2)
{
  struct passwd *file3;

  file3 = getpwuid((long)file2.st_uid);
  my_printf("%s ", file3->pw_name);
}

void    mod_t6(DIR *rep, struct dirent *file, struct stat file2)
{
  struct group *file3;

  file3 = getgrgid(file2.st_gid);
  my_printf("%s ", file3->gr_name);
}

void    mod_t7(DIR *rep, struct dirent *file, struct stat file2)
{
  char  *file3;

  file3 = ctime(&(file2.st_mtime));
  my_putchar(file3[4]);
  my_putchar(file3[5]);
  my_putchar(file3[6]);
  my_putchar(file3[7]);
  my_putchar(file3[8]);
  my_putchar(file3[9]);
  my_putchar(file3[10]);
  my_putchar(file3[11]);
  my_putchar(file3[12]);
  my_putchar(file3[13]);
  my_putchar(file3[14]);
  my_putchar(file3[15]);
}
