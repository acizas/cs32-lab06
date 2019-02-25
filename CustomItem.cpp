//CustomItem.cpp

#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include <string>
#include "CustomItem.h"

CustomItem::CustomItem(std::string size): IceCreamItem(size){

  if (size == "small")
    price = 3.00;
  if (size == "medium")
    price = 5.00;
  if (size == "large")
    price = 6.50;
  
}

CustomItem::~CustomItem() {
  
}

void CustomItem::addTopping(std::string topping) {

  int oz = 1;
  for (unsigned int i = 0; i < toppings.size(); i++){
    if (toppings[i].first == topping){;
	toppings[i].second += 1.0;
	this->price = this->price + 0.40;
	return;
    }
    
    toppings.push_back(std::pair<std::string, int>(topping,oz));
    this->price = this->price + 0.40;
  
  }
}

double CustomItem::getPrice() {

  return price;

}

std::string CustomItem::composeItem() {
  /*
  std::string out = "";
  std::vector<std::string> removed;
  std::vector<int> value;
 
  out += "Custom Size: ";
  out += size;
  out += '\n';
  out += "Toppings: \n";
  for (unsigned int i = 0; i < toppings.size(); i++){
    int count = 0;
    if (std::find(removed.begin(), removed.end(), toppings[i]) != removed.end()) {
      removed.push_back(toppings[i]);
      for (unsigned int j = 0; j < toppings.size(); j++) {
	if (toppings[i] == toppings[j])
	  count++;
      }
      value.push_back(count);
    }
  }
  for (unsigned int k = 0; k < removed.size(); k++){
    
    out += removed[k];
    out += ": ";
    out += value[k];
    out += " oz\n";
    
  }
  out += "Price: $";
  out += price;
  out += '\n';

  return out;
  */

  std::stringstream stream;
  stream << std::fixed << std::setprecision(2) << this->getPrice();
  std::string result = "Custom Size: " + this->IceCreamItem::size + '\n' + "Toppings:" + '\n';
  if (this->toppings.size()>0) {
    for (size_t i = 0; i < toppings.size(); i++){
      std::stringstream streamb;
      streamb << std::fixed << std::setprecision(2) << toppings[i].second;
      result += (toppings[i].first + ": " + streamb.str()+ " oz" + '\n');  
    }

    result += "Price: $" + stream.str() = '\n';;
    return result;
  }
}



  

