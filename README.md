This is a simple bank system written in C that allows users to deposit and withdraw money.

It's my first time using C and I'm still learning how to use it.

The program is divided into two files:

- main.c
- lib/retireMoney.c
- lib/depositMoney.c

The main.c file is the entry point of the program and it calls the other two files.

The lib/retireMoney.c file contains the function that allows users to retire their money.

The lib/depositMoney.c file contains the function that allows users to deposit money.

COMPILE THE PROGRAM BY EXECUTING THE FOLLOWING COMMAND:

```bash
gcc -Wall -Wextra -g3 main.c lib/retireMoney.c lib/depositMoney.c -o output/main
```

RUN THE PROGRAM BY EXECUTING THE FOLLOWING COMMAND:

```bash
sudo ./output/main
```
