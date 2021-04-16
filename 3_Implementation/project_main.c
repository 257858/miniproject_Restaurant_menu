#include <menu.h>

int main()
{
    order_details ord;
    int choice;
    choice=print_menu(ord);
    print_price(ord,choice);

}
