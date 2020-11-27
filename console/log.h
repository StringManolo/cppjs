#pragma once

#include <iostream>
#include <utility>
#include <any>
#include <stdio.h>

struct {
  std::any aux;

  template<typename T>
  static void log(T&& t) {
    if (typeid(t).name() == typeid(aux).name()) {
      std::cout << "NEED TO CAST " << typeid(aux).name() << std::endl;
    } else {
      std::cout << "\nTHE TYPE IS: " << typeid(t).name() << std::endl;

      /*printf(t);
      fflush(stdout);*/
     // std::cout << t << "\n";
    }
  }

  template<typename T, typename...Args>
  static void log(T&& t, Args&&... args) {
std::cout << "Is this only called in multiple args?";
    //std::cout << t;
    //log(std::forward<Args>(args)...);
  }
} console;
