// CustomItem.h

#include <iostream>
#include <vector>
#include "IceCreamItem.h"

class CustomItem : public IceCreamItem {
 public:
  
  CustomItem(std::string size);         // Default Constructor
  virtual ~CustomItem();                // Virtual Destructor
  void addTopping(std::string topping); // Adds topping of type string
  virtual std::string composeItem();    // Returns customized item
  virtual double getPrice();            // Returns price

 protected:
  
  std::vector<std::pair<std::string,int> > toppings;
  double price;
  std::string size;

};
