// Copyright 2017 <ggarber@github>

#include "Template.hpp"

#include <iostream>

using bootstrap::Template;

void Template::run() const {
  std::cout << "Hello world!\n";
}

int Template::sum(int a, int b) const {
  return a + b;
}
