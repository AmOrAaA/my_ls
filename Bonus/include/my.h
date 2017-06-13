/*
** my.h for  in /home/AmOrAA/Delivery/LS/test/include
** 
** Made by Florian Testu
** Login   <AmOrAA@epitech.net>
** 
** Started on  Thu Dec  1 13:26:15 2016 Florian Testu
** Last update Sat Dec  3 17:54:44 2016 Florian Testu
*/

#ifndef MY_H_
# define MY_H_

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <stdio.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>

void	my_printf();
int	my_strcmp(char *s1, char *s2);
void	my_putchar(char z);
void	my_putstr(char *str);
void	mod_t(DIR *rep, struct dirent *file, struct stat file2);
void	mod_t1();
void	mod_t2(DIR *rep, struct dirent *file, struct stat file2);
void	mod_t5(DIR *rep, struct dirent *file, struct stat file2);
void	mod_t4(DIR *rep, struct dirent *file, struct stat file2);
void	mod_t6(DIR *rep, struct dirent *file, struct stat file2);
void	mod_t7(DIR *rep, struct dirent *file, struct stat file2);
void	mod_t8(DIR *rep, struct dirent *file, struct stat file2);
void	ls2(int argc, char **argv);
void	ls2_l(int argc, char **argv);
void	ls2_d(int argc, char **argv);
void	ls2_a(int argc, char **argv);
void	ls2_la(int argc, char ** argv);
void	ls(int argc, char ** argv);
void	ls_l(int argc, char **argv);
void	ls_d(int argc, char **argv);
void	ls_a(int argc, char **argv);
void	ls_la(int argc, char **argv);

#endif
