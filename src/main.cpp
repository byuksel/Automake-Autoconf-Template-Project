#include <iostream>
#include "helper.h"
#include "../my_inc/myadd.h"

int main() {
  MyAdd add_obj;
  std::cout << "Addition Result:" << add_obj.add(1,1) << std::endl;
}
