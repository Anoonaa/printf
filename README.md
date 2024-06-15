# printf()

The printf() function, which is short for “print formatted,” is a fundamental function in  C , It is part of the standard input/output library (`stdio.h`) it is  primarily used for outputting formatted text on the console . With `printf`, you can display various data types such  as :

integers, floating-point numbers, characters, and strings

and can allow formatting in numerous ways.

## Resource :
https://www.academia.edu/10297206/Secrets_of_printf_

### Parameters

-formatted_string: It is a string that specifies the data to be printed. It may also contain a format specifier to print the value of any variable such as a character and an integer.
-arguments_list: These are the variable names corresponding to the format specifier


### Supported Format Specifiers

Format specifiers begin with '%' and can include optional flags, length modifiers, and conversion characters.

#### Available Specifiers

| Specifier | Description |
| --------- | ----------- |
| `c`       | Character   |
| `d` or `i`| Signed decimal integer |
| `s`       | String of characters |
| `b`       | Binary representation |
| `o`       | Octal representation |
| `u`       | Unsigned decimal integer |
| `x`       | Unsigned hexadecimal integer (lowercase) |
| `X`       | Unsigned hexadecimal integer (uppercase) |
| `p`       | Pointer address |
| `r`       | Reverse string |
| `R`       | ROT13 encrypted string |
| `S`       | String with special characters replaced by ASCII values |
| `%`       | Literal '%' character |

### Flags and Length Modifiers

Flags (`+`, `(space)`, `#`, `0`) and length modifiers (`l`, `h`) modify the behavior of specifiers.

### Usage
- Compile using :
  ```$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c```

- Simply include the main.h header file in your own program and call the custom printf function with the desired format string and any necessary arguments.

##### Example usage:
```
_printf("Hello %s\n", "World");
```

###### This will output:

```Hello World```

### Authors

- Anoona Sithole
- Shumirai Sithole




