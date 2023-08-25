<h1 align ="center"> Simple Shell :computer:  </h1>

Welcome to the Simple Shell project!

<img src="https://cdn.dribbble.com/users/94656/screenshots/1141726/media/0c2f17905187e9a34d0aa82e2237ea8b.gif" alt="Shell">


# :iphone: Simple-_shell:

This is a basic implementation of a command-line shell in C, designed to provide users with a minimalistic yet functional interface for interacting with their operating system. Whether you're a beginner looking to understand the fundamentals of shell programming or an enthusiast who wants to tinker with a simple shell, this project is a great starting point.

#
## :sparkles: Features

Command execution: Run system commands just like you would in a regular terminal.
Basic built-in commands: The shell supports a few built-in commands such as cd (change directory) and exit (exit the shell).
Input and output redirection: Redirect the standard input and output of commands using < and > operators.
Pipeline support: Chain multiple commands together using the | operator for input-output redirection.
#
## :chart_with_downwards_trend: Flowchart

In order to enhance your comprehension of the rationale behind our shell, we kindly request you to review this Flowchart:

![Blank diagram](https://github.com/Adib-96/holbertonschool-simple_shell/assets/135613265/9d171fc5-4bf8-41ee-90a4-08f7550c14f6)



## :full_moon_with_face: Getting Started

Follow these steps to get the Simple Shell up and running on your local machine:

1. Clone the repository :
`git clone https://github.com/Adib-96/holbertonschool-simple_shell.git`
2. Navigate to the project directory: `cd holbertonschool-simple_shell`
3. Compile the shell

4. Run the shell : `./hsh`

# :notebook_with_decorative_cover: compilation

Compilation : `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`
#
# :electric_plug: Testing


Our shell work like this in interactive mode :

    -$ ./hsh
    ($) /bin/ls
    hsh main.c shell.c
    ($)
    ($) exit
    $

also in non-interactive mode:

    -$ echo "/bin/ls" | ./hsh
    hsh main.c shell.c test_ls_2
    $
    $ cat test_ls_2
    /bin/ls
    /bin/ls
    $
    $ cat test_ls_2 | ./hsh
    hsh main.c shell.c test_ls_2
    hsh main.c shell.c test_ls_2
    $



# :black_nib: Contributors:
### Rayen jouini
### Adib Ben Hadada
### Samir Arfaoui
# holbertonschool-simple_shell
