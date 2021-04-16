/** 
* @file menu.h
* Digital Menu which also keeps the tab on the bill
*
*/
#ifndef __MENU_H__
#define __MENU_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

GlOBAL int price[10]={150, 150, 80, 150, 200, 200, 150, 30, 40, 50}

/**
 * @struct has two elements 
 * 1) no_items- it has the quantity of each of the food items ordered corresponding to items.
 * 2) bill_amt- has total bill to be paid.
 */

typedef struct order_details
{
    int no_items[10]={0,0,0,0,0,0,0,0,0,0};
    double bill_amt=0.0;
}order_details ord;

/**
*  updates the order and bill amount
* @param[in] structure for the order
* @param[in] choice of item
* @return void
*/
void order_place(struct order_details ord,int ch);

/**
*  to print the price of the choosen item or total bill amount
* @param[in] structure for the order 
* @param[in] choice of item
* @return void
*/
void print_price(struct order_details ord,int ch);

/**
*  prints the main menu
* @param[in] structure for the order 
* @return the choice made
*/
int print_menu(struct order_details ord);

/**
*  calculates the price for the new order
* @param[in] structure for the order 
* @return calculated amount
*/
int calculate(int ch,int num);

#endif  /* #define __MENU_H__ */


