#include "./headers.h"
#include <functional>
int main(int argc, char *argv[]) {

  let word = "world";
  console.log("Hello", word, "!");
  
  var a = 12;
  console.log("a:", a);

  let myHtml = fetch("https://foro.elhacker.net");
  console.log("Example Code:", myHtml);
  return 0;
}
