#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Publication.h"
#include "Book.h"
#include "Magazine.h"

class Order {
    public:
        void add_to_cart(Publication &P); // (!) Adds only the price of the publication to the order
        double total_price(void); // returns the total price
        static int number_of_orders(); // number of all ordered items

    private:
        static int num_orders_; // Number of items in an order
        double total_price_; // Total price of all items in an order
};