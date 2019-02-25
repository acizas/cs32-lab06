// CustomItem.h

#include <iostream>
#include <vector>
#include "IceCreamItem.h"

class CustomItem : public IceCreamItem {
 public:
  
  CustomItem(std::string size);
  virtual ~CustomItem();
  void addTopping(std::string topping);
  virtual std::string composeItem();
  virtual double getPrice();

 protected:
  
  std::vector<std::pair<std::string,int> > toppings;
  double price;
  std::string size;

};
