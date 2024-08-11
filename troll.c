#include <unistd.h>

void ft_print_rest_of_tab_ascii(void) 
{
    char c; 
    
    c = 'Z';

    while (c <= 126) {
        write(1, &c, 1);
        write(1, "\n", 1);
        c++;
    }
}

int main(void) 
{
    ft_print_rest_of_tab_ascii();
    return 0;
}
