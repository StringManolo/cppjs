#pragma once

#include <string>
#include <vector>

std::vector<std::string> split(std::string text, std::string pattern) {
  std::vector<std::string> lines = {};
  std::string aux = "";
  text += pattern; 
  for (int i = 0; i < text.size(); ++i) {
    if (i != text.find(pattern, i)) {
      aux += text[i];
    } else if (i + 1 == text.size()) {
      lines.push_back(aux);
      aux = "";
    } else {
      i += pattern.size() - 1;
      lines.push_back(aux);
      aux = "";
    }
  }
  return lines;
}



/* add "".replace(); */
/* add "".substr(); */
/* add "".substring();b*/
