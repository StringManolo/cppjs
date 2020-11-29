#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <any>

struct Console
{

template <typename ...Ts>
static void log(Ts&&... ts)
{
    (do_log(ts), ...);
    std::cout << "\n";
}

// private:
template <typename T>
static void do_log(const T& arg) {
    std::cout << arg;
}

template <typename T>
static void do_log(const std::vector<T>& v)
{
    std::cout << '{';

    const char* sep = "";
    for (const auto& e : v) {
        std::cout << sep;
        do_log(e);
        sep = ", ";
    }
    std::cout << '}';
}

template <typename T>
static bool try_log_any(const std::any& arg) {
    if (auto* p = std::any_cast<T>(&arg)) {
        do_log(*p);
        return true;
    }
    return false;
}

template <typename... Ts>
static bool try_log_any_from(const std::any& arg) {
    if ((try_log_any<Ts>(arg) || ...)) {
        return true;
    }

    auto t = arg;
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
    return false;
}

static void do_log(const std::any& arg) {
    try_log_any_from<std::string, int, unsigned, char, float, double /*..*/>(arg);
}
};

Console console;

