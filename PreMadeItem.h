// PreMadeItem.h

#include <iostream>
#include "IceCreamItem.h"

class PreMadeItem : public IceCreamItem {
 public:
  
  PreMadeItem(std::string name, std::string size);
  virtual ~PreMadeItem();
  virtual std::string composeItem();
  virtual double getPrice();
  virtual std::string getSize();
  virtual std::string getName();

 protected:

  double price;
  std::string size;
  std::string name;

};
