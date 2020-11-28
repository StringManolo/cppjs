#pragma once

#include <iostream>
#include <utility>
#include <any>
#include <vector>
#include <string>

struct {
  std::any aux;

  template<typename T, typename...Args>
  static void log(T&& t, Args&&... args) {

    log(t);
    log(std::forward<Args>(args)...);
    if(sizeof...(args) > 1) {

    } else {
      std::cout << "\n";
    }

  }

  static void log(std::string arg) {
    std::cout << arg;
  }

  static void log(int arg) {
    std::cout << arg;
  }

  static void log(bool arg) {
    std::cout << arg;
  }

  static void log(short int arg) {
    std::cout << arg;
  }

  static void log(unsigned short int arg) {
    std::cout << arg;
  }

  static void log(unsigned int arg) {
    std::cout << arg;
  }

  static void log(long int arg) {
    std::cout << arg;
  }

  static void log(unsigned long int arg) {
    std::cout << arg;
  }

  static void log(long long int arg) {
    std::cout << arg;
  }

  static void log(unsigned long long int arg) {
    std::cout << arg;
  }

  static void log(float arg) {
    std::cout << arg;
  }

  static void log(double arg) {
    std::cout << arg;
  }

  static void log(char arg) {
    std::cout << arg;
  }

  static void log(unsigned char arg) {
    std::cout << arg;
  }

  static void log(wchar_t arg) {
    std::cout << arg;
  }

  static void log(const char* arg) {	
    std::cout << arg;
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

  static void log(std::vector<bool> arg) {
    for(int i = 0; i < arg.size(); ++i) {
      if (i + 1 == arg.size()) {                                              std::cout << arg[i] << std::endl;
      } else {
        std::cout << arg[i] << ", ";
      }
    }
  }

  static void log(std::vector<short int> arg) {
    for(int i = 0; i < arg.size(); ++i) {
      if (i + 1 == arg.size()) {                                              std::cout << arg[i] << std::endl;
      } else {
        std::cout << arg[i] << ", ";
      }
    }
  }

  static void log(std::vector<unsigned short int> arg) {
    for(int i = 0; i < arg.size(); ++i) {
      if (i + 1 == arg.size()) {                                              std::cout << arg[i] << std::endl;
      } else {
        std::cout << arg[i] << ", ";
      }
    }
  }

  static void log(std::vector<unsigned int> arg) {
    for(int i = 0; i < arg.size(); ++i) {
      if (i + 1 == arg.size()) {                                              std::cout << arg[i] << std::endl;
      } else {
        std::cout << arg[i] << ", ";
      }
    }
  }

  static void log(std::vector<long int> arg) {
    for(int i = 0; i < arg.size(); ++i) {
      if (i + 1 == arg.size()) {                                              std::cout << arg[i] << std::endl;
      } else {
        std::cout << arg[i] << ", ";
      }
    }
  }

  static void log(std::vector<unsigned long int> arg) {
    for(int i = 0; i < arg.size(); ++i) {
      if (i + 1 == arg.size()) {                                              std::cout << arg[i] << std::endl;
      } else {
        std::cout << arg[i] << ", ";
      }
    }
  }

  static void log(std::vector<long long int> arg) {
    for(int i = 0; i < arg.size(); ++i) {
      if (i + 1 == arg.size()) {                                              std::cout << arg[i] << std::endl;
      } else {
        std::cout << arg[i] << ", ";
      }
    }
  }

  static void log(std::vector<unsigned long long int> arg) {
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

  static void log(std::vector<char> arg) {
    for(int i = 0; i < arg.size(); ++i) {
      if (i + 1 == arg.size()) {                                              std::cout << arg[i] << std::endl;
      } else {
        std::cout << arg[i] << ", ";
      }
    }
  }

  static void log(std::vector<unsigned char> arg) {
    for(int i = 0; i < arg.size(); ++i) {
      if (i + 1 == arg.size()) {                                              std::cout << arg[i] << std::endl;
      } else {
        std::cout << arg[i] << ", ";
      }
    }
  }

  static void log(std::vector<wchar_t> arg) {
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
        std::cout /* ANY */<< std::any_cast<std::string>(t) << std::endl;
      } catch (const std::bad_any_cast& a) {
        //std::cout << a.what() << '\n';
	try {
	  std::any_cast<int>(t);
          std::cout /* ANY */<< std::any_cast<int>(t) << std::endl;
        } catch (const std::bad_any_cast& b) {
          try {
	    std::any_cast<bool>(t);
	    std::cout /* ANY */<< std::any_cast<bool>(t) << std::endl;
	  } catch (const std::bad_any_cast& c) {
	    try {
	      std::any_cast<short int>(t);
	      std::cout /* ANY */<< std::any_cast<short int>(t) << std::endl;
	    } catch (const std::bad_any_cast& d) {
              try {
	        std::any_cast<unsigned short int>(t);
		std::cout /* ANY */<< std::any_cast<unsigned short int>(t) << std::endl;
	      } catch (const std::bad_any_cast& e) {
                try {
		  std::any_cast<unsigned int>(t);
		  std::cout /* ANY */<< std::any_cast<unsigned int>(t) << std::endl;
		} catch (const std::bad_any_cast& f) {
                  try {
                    std::any_cast<long int>(t);
		    std::cout /* ANY */<< std::any_cast<long int>(t) << std::endl;
		  } catch (const std::bad_any_cast& g) {
                    try {
		      std::any_cast<unsigned long int>(t);
		      std::cout /* ANY */<< std::any_cast<unsigned long int>(t) << std::endl;
		    } catch (const std::bad_any_cast& h) {
                      try {
                        std::any_cast<long long int>(t);;
			std::cout /* ANY */<< std::any_cast<long long int>(t) << std::endl;
		      } catch (const std::bad_any_cast& i) {
                        try {
                          std::any_cast<unsigned long long int>(t);
			  std::cout /* ANY */<< std::any_cast<unsigned long long int>(t) << std::endl;
		        } catch (const std::bad_any_cast& j) {
                          try {
                            std::any_cast<float>(t);
			    std::cout /* ANY */<< std::any_cast<float>(t) << std::endl;
			  } catch (const std::bad_any_cast& k) {
                            try {
			      std::any_cast<double>(t);
			      std::cout /* ANY */<< std::any_cast<double>(t) << std::endl;
			    } catch (const std::bad_any_cast& l) {
                              try {
                                std::any_cast<char>(t);
				std::cout /* ANY */<< std::any_cast<char>(t) << std::endl;
			      } catch (const std::bad_any_cast& m) {
                                try {
                                  std::any_cast<unsigned char>(t);
				  std::cout /* ANY */<< std::any_cast<unsigned char>(t) << std::endl;
			        } catch (const std::bad_any_cast& n) {
                                  try {
				    std::any_cast<wchar_t>(t);
				    std::cout /* ANY */<< std::any_cast<wchar_t>(t) << std::endl;
				  } catch (const std::bad_any_cast& o) {
		                    try {
				      std::any_cast<const char*>(t);
				      std::cout /* ANY */<< std::any_cast<const char*>(t) << std::endl;

				    } catch (const std::bad_any_cast& p) {
				      std::cout << a.what() << '\n'; 
				    }
				  }
				}
			      }
			    }
			  }
			}
		      }
		    }
		  }
		}
	      }
	    }
	  }
        }
      }
      
    } else {
      std::cout << "THE TYPE (" << typeid(t).name() << ") IS NOT OVERLOADED.\nHANDLE MANUALLY ADDING A NEW LOG FUNCTION UNDER console/log.h FILE USING THE TYPE AS ARGUMENT." << std::endl; 
    }
  }


} console;
