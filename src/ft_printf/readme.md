*This project has been created as part of the 42 curriculum by joellin.*

# FT_PRINTF

## Description

Reproduction de la fonction Printf  
en utilisant les format de base  
chaque format correspond au different fonction present dans la liste ci-dessous

-  ### List de fonction utiliser 
- [X] ft_putchar.c                  `%c` pour les caracter
- [X] ft_putstr.c                     `%s` pour les chaine de caracter
- [X] ft_putptr.c                    `%p` pour les pointer
- [X] ft_putnbr.c                   `%d` pour les chiffre
- [X] ft_putunsigned.c        `%u` pour les unsigned int
- [X] ft_puthex.c                  `%x` && `%X` pour les hex
- [X] ft_printf.c                     coeur du printf qui relit chaque fonction ensemble et gere aussi chaque format

## Instructions

- build project
```bash
make
```
- remove .o
```bash
make clean
```
- remove .o and name
```bash
make fclean
```
- remove .o and name, rebuild instenly the project
```bash
make re
```

compile :

```bash
cc ./libftprintf.a ./main.c -Wall -Wextra -Werror
```

Declaration :

```C
#include "ft_printf.h"
```

> Important : le fichier main n'est pas inclu

## Resources

Recuperation de 5 fonction provenant du projet Libft

AI Usage :

- Chatgpt / Gemini : explication et direction
- Gemini / Claude : audit pour les memory leaks