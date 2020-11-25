#include "./json.hpp"
#include <string>
using json::YEISON;

struct {
  YEISON parse(std::string jsonObj) {
    return YEISON::Load(jsonObj);
  }
} JSON;
