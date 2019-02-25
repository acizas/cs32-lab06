//PreMadeItem.cpp

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <iomanip>
#include "IceCreamItem.h"
#include "PreMadeItem.h"

PreMadeItem::PreMadeItem(std::string name, std::string size) : IceCreamItem(size) {

  this->name = name;
  if (size == "small")
    price = 4.00;
  if (size == "medium")
    price = 6.00;
  if (size == "large")
    price = 7.50;

}

PreMadeItem::~PreMadeItem() {

}

double PreMadeItem::getPrice() {

  return price;

}

std::string PreMadeItem::getSize() {

  return size;

}

std::string PreMadeItem::getName() {

  return this->name;

}

std::string PreMadeItem::composeItem(){
  /*
  std::string out = "";
  out += "Pre-made Size: ";
  out += this->IceCreamItem::size;
  out += '\n';
  out += "Pre-made Item: ";
  out += this->name;
  out += '\n';
  out += "Price: $";
  out += this->IceCreamItem::price;
  out += '\n';

  return out;
  */

  std::stringstream stream;
  stream << std::fixed << std::setprecision(2) << this->getPrice();
  std::string out = "Pre-made Size: " + this->IceCreamItem::size + "\n" + "Pre-made Item: " + this->name + "\n" + "Price: $" + stream.str() + "\n";

  return out;
}
    
    

  
