//CustomItem.cpp

#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include <string>
#include "CustomItem.h"

// Default constructor
CustomItem::CustomItem(std::string size): IceCreamItem(size){

  if (size == "small")
    price = 3.00;
  if (size == "medium")
    price = 5.00;
  if (size == "large")
    price = 6.50;
  
}

// Destructor
CustomItem::~CustomItem() {
  
}

// Adds a topping and increments the price
void CustomItem::addTopping(std::string topping) {

  int oz = 1;
  for (size_t i = 0; i < toppings.size(); i++){
    if (toppings[i].first == topping){
	toppings[i].second += 1.0;
	this->price = this->price + 0.40;
	return;
    }
  }  
  toppings.push_back(std::pair<std::string, int>(topping,oz));
  this->price = this->price + 0.40;
  
}

// Returns price
double CustomItem::getPrice() {

  return price;

}

// Produces custom item string
std::string CustomItem::composeItem() {


  std::stringstream stream;
  stream << std::fixed << std::setprecision(2) << this->getPrice();
  std::string result = "Custom Size: " + this->IceCreamItem::size + '\n' + "Toppings:" + '\n';
  if (this->toppings.size()>0) {
    for (size_t i = 0; i < toppings.size(); i++){
      std::stringstream streamb;
      streamb << std::fixed << std::setprecision(2) << toppings[i].second;
      result += (toppings[i].first + ": " + streamb.str()+ " oz" + '\n');  
    }
  }
    result += "Price: $" + stream.str() + '\n';
    return result;
}



  

