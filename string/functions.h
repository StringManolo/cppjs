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

std::string join(std::vector<std::string> text, std::string replacement) {
  std::string aux = "";
  for (int i = 0; i < text.size(); ++i) {
    if (i + 1 != text.size()) {
      aux += text[i] + replacement;
    } else {
      aux += text[i];
    }
  }
  return aux;
}


std::string replace(std::string text, std::string pattern, std::string replacement) {
  text.replace(text.find(pattern), pattern.size(), replacement);
  return text;
}


/* add "".substr(); */
/* add "".substring(); */
