#include <menu.h>
int calculate(int ch,int num)
{
    int amt=price[ch-1]*num;
    return amt;
}
void order_place(struct order_details ord,int ch)
{   
    int num;
    printf("Enter number of plates");
    scanf("%d",&num);
    ord.no_items[ch-1]=num;
    ord.bill_amt=order.bill_amt+ calculate(ch,num);
    print_menu(ord);
}
void print_price(struct order_details ord,int ch)
{
    if(ch>0 && ch<=10)
    {
        printf("price=%d\n",price[ch+1]);
        printf("Enter 1 to order and 0 to return back\n");
        int ch_o;
        if(ch_o==1)
        {
            order_place(ord,ch);
        }
        else{
            print_menu(ord);
        }
    }
    else if(ch==0)
    {
        printf("Total bill: %d\n",ord.bill_amt);
        exit();
    }
    else
    {
        printf("Invalid Enter again\n");
        print_menu(ord);
    }
}
int print_menu(struct order_details ord)
{   
    printf("MENU\n");
    printf("1.Gobi Manchurian\n 2.Noodles\n 3.French fries\n 4.Fried rice\n 5.North indian thali\n 6.South indian thali\n 7.Falooda\n 8.Paani Puri\n 9.Masala Puri\n 10.Dahi Puri\n 0. total bill\n");
    printf("Enter item no\n");
    int ch;
    scanf("%d",&ch);
    return ch;
}
