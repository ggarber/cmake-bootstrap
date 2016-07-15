#!/usr/bin/env bash

cp src/Template.hpp src/$1.hpp
sed -i '' "s/Template/$1/g" src/$1.hpp
cp src/Template.cpp src/$1.cpp
sed -i '' "s/Template/$1/g" src/$1.cpp
cp test/TemplateTest.cpp test/$1Test.cpp
sed -i '' "s/Template/$1/g" test/$1Test.cpp
