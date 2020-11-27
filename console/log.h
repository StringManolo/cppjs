#pragma once

#include <iostream>
#include <utility>
#include <any>
#include <vector>
#include <string>

struct {
  std::any aux;

  static void log(std::string arg) {
    std::cout << arg << std::endl;
  }

  static void log(int arg) {
    std::cout << arg << std::endl;
  }

  static void log(float arg) {
    std::cout << arg << std::endl;
  }

  static void log(double arg) {
    std::cout << arg << std::endl;
  }

  static void log(char arg) {
    std::cout << arg << std::endl;
  }

  static void log(const char* arg) {	
    std::cout << arg << std::endl;
  }

  static void log(std::vector<std::string> arg) {
    for(int i = 0; i < arg.size(); ++i) {
      if (i + 1 == arg.size()) {
        std::cout << arg[i] << std::endl;
      } else {
        std::cout << arg[i] << ", ";
      }
    }
  }

  static void log(std::vector<int> arg) {
    for(int i = 0; i < arg.size(); ++i) {
      if (i + 1 == arg.size()) {                                              std::cout << arg[i] << std::endl;
      } else {
        std::cout << arg[i] << ", ";
      }
    }
  }

  static void log(std::vector<float> arg) {
    for(int i = 0; i < arg.size(); ++i) {
      if (i + 1 == arg.size()) {                                              std::cout << arg[i] << std::endl;
      } else {
        std::cout << arg[i] << ", ";
      }
    }
  }

  static void log(std::vector<double> arg) {
    for(int i = 0; i < arg.size(); ++i) {
      if (i + 1 == arg.size()) {                                              std::cout << arg[i] << std::endl;
      } else {
        std::cout << arg[i] << ", ";
      }
    }
  }

  template<typename T>
  static void log(T&& t) {
    if (typeid(t).name() == typeid(aux).name()) {
      //std::cout << "NEED TO CAST " << typeid(aux).name() << std::endl;

      try {
	std::any_cast<std::string>(t);
        std::cout << "ANY: " << std::any_cast<std::string>(t) << std::endl;
      } catch (const std::bad_any_cast& a) {
        //std::cout << a.what() << '\n';
	try {
	  std::any_cast<const char*>(t);
          std::cout << "ANY: " << std::any_cast<const char*>(t) << std::endl;
        } catch (const std::bad_any_cast& b) {
          try {
	    std::any_cast<int>(t);
	    std::cout << "ANY: " << std::any_cast<int>(t) << std::endl;
	  } catch (const std::bad_any_cast& c) {
	    std::cout << c.what() << '\n';
	  }
        }
      }
      
    } else {
      std::cout << "THE TYPE (" << typeid(t).name() << ") IS NOT OVERLOADED.\nHANDLE MANUALLY ADDING A NEW LOG FUNCTION UNDER console/log.h FILE USING THE TYPE AS ARGUMENT." << std::endl; 
    }
  }

  template<typename T, typename...Args>
  static void log(T&& t, Args&&... args) {
    log(std::forward<Args>(args)...);
  }
} console;
