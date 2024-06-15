#include "main.h"

/**
 * print_buffer - Prints the contents of the buffer if it exists
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
static void print_buffer(char buffer[], int *buff_ind)
{
    if (*buff_ind > 0) {
        write(1, buffer, *buff_ind);
        *buff_ind = 0;
    }
}

/**
 * _printf - Printf function
 * @format: format string
 * @...: variable arguments
 * Return: Number of printed characters
 */
int _printf(const char *format,...)
{
    int printed_chars = 0;
    va_list list;
    char buffer[BUFF_SIZE];
    int buff_ind = 0;

    if (format == NULL) {
        return -1;
    }

    va_start(list, format);

    for (; *format; format++) {
        if (*format!= '%') {
            buffer[buff_ind++] = *format;
            if (buff_ind == BUFF_SIZE) {
                print_buffer(buffer, &buff_ind);
            }
            printed_chars++;
        } else {
            print_buffer(buffer, &buff_ind);
            int flags = get_flags(format, &format);
            int width = get_width(format, &format, list);
            int precision = get_precision(format, &format, list);
            int size = get_size(format, &format);
            format++; // increment format pointer
            int printed = handle_print(format, &format, list, buffer, flags, width, precision, size);
            if (printed == -1) {
                return -1;
            }
            printed_chars += printed;
        }
    }

    print_buffer(buffer, &buff_ind);

    va_end(list);

    return printed_chars;
}
