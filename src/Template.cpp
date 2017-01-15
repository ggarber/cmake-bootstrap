// Copyright 2016 <ggarber@github>

#include <iostream>

#include "Template.hpp"

using bootstrap::Template;

void Template::run() const {
  std::cout << "Hello world!\n";
}

int Template::sum(int a, int b) const {
  return a + b;
}
