#include <iostream>
#include "helper.h"
#include "../my_inc/my_add.h"

int main() {
  MyAdd add_obj;
  std::cout << "Addition Result:" << add_obj.add(1,1) << std::endl;
}
