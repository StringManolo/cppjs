#include "./headers.h"

int main(int argc, char *argv[]) {

  let word = "world";
  console.log("Hello", word, "!");
  
  var a = 12;
  console.log("a:", a);

  let myHtml = fetch("https://example.com");
  console.log("Example Code:", myHtml);

  fetchOptions.method = "POST";
  fetchOptions.data = "name=StringManolo&pass=123";
  myHtml = fetch("https://example.com");
  console.log("Post Request return:", myHtml);
  return 0;
}
