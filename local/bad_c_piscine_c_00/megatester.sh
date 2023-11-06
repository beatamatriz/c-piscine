#! /bin/bash
norminette ./*/f*.c
rm ex00/main/a.out
cc  -Wall -Wextra -Werror ex00/main/main_00.c
./ex00/main/a.out
