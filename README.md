# ft_printf

## Description

This goal goal of this project is to recreate the behavior of the `printf` function from `stdio` library in `C`.

We don't actually have to implement everything, since the mandatory part only covers a limited selection of specifiers:

| Specifier | Description                                       |
|-----------|---------------------------------------------------|
| `%c`      | Character. Prints a single character.             | 
| `%s`      | String. Prints a sequence of characters (string). | 
| `%p`      | Pointer. Prints a memory address.                 |
| `%d`      | Signed decimal integer.                          | 
| `%i`      | Signed decimal integer (same as `%d`).            | 
| `%u`      | Unsigned decimal integer.                         | 
| `%x`      | Unsigned hexadecimal integer (lowercase).         | 
| `%X`      | Unsigned hexadecimal integer (uppercase).         | 
| `%%`      | Prints a literal `%` character.                   | 


The function prototype is:

```c
int ft_printf(char const *format, ...)
```

Wait, `int` is the output type? Yep, turns out `printf` outputs the number of characters it prints!

## Tips

### 1. RTFM!

Read the manual for `printf` [here](https://linux.die.net/man/3/printf). 

It should contain all the information you need to know to correctly implement the function.

### 2. Variadic functions

`printf` can take as many arguments as the user wants, that's why we can't simply fix `n` parameters.

Using ellipsis `...` as the last parameter declares a variadic function.

Reading about `stdarg` library will prove useful. You can do it [here](https://en.cppreference.com/w/c/variadic)

| Macro/Type   | Description                                                                                 |
|--------------|---------------------------------------------------------------------------------------------|
| `va_start`   | Enables access to variadic function arguments. Defined in header `<stdarg.h>`.               |
| `va_arg`     | Accesses the next variadic function argument. Defined in header `<stdarg.h>`.                |
| `va_copy`    | (C99) Makes a copy of the variadic function arguments. Defined in header `<stdarg.h>`.       |
| `va_end`     | Ends traversal of the variadic function arguments. Defined in header `<stdarg.h>`.           |
| `va_list`    | Holds the information needed by `va_start`, `va_arg`, `va_end`, and `va_copy` (typedef).     |


### 3. Project structure

You can use as many directories and C files/headers as you want, I structured my project as follows:

```bash
├── ft_printf.c
├── ft_printf.h
├── libft
│   ├── *.c
│   └── libft.h
├── Makefile
└── utils
    ├── ft_printf_char.c
    ├── ft_printf_hex.c
    ├── ft_printf_int.c
    ├── ft_printf_pointer.c
    ├── ft_printf_string.c
    └── ft_printf_uint.c
```

Where `ft_printf.c` contains the general, abstract implementation logic of `printf`. 
`libft` is a directory with useful functions that are also used in `utils`, a directory specifically created for printing each specifier format.

### 4. Test before pushing!

Don't risk losing evaluation points! Some dedicated students have built useful testers that cover most of the edge cases that Moulinette might throw at you. I personally used [francinette](https://github.com/xicodomingues/francinette).

Here’s how to set it up on your machine:

1) Install it with the following command:

```bash
bash -c "$(curl -fsSL https://raw.github.com/xicodomingues/francinette/master/bin/install.sh)"
```

2) Navigate to the `francinette` directory and install the required Python libraries:

```python
python3 -m pip install -r requirements.txt
```

> **_NOTE:_** It’s a good idea to use a virtual environment. 
> You can create one with: `python3 -m venv .venv`. Then, activate it with: `source .venv/bin/activate` before running the command above.

3) Create an alias for running francinette:

Add the following line to your `.zshrc` file in your `home` directory:

```bash
alias paco="python3 /home/<intra login>/francinette/main.py"
```

4) Create a `Makefile` and test your functions!

You’ll need a `Makefile` to run the testers. Once it's set up, simply execute the following command in your project directory:
```bash
paco
```
