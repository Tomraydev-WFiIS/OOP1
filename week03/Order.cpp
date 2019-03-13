#include "Order.h"


int Order::num_orders_ = 0;

int Order::number_of_orders(){
    return num_orders_;
}

void Order::add_to_cart(Publication &P){
    total_price_ += P.get_price();
    num_orders_++;
    return;
}

double Order::total_price(void){
    return total_price_;
}