#include "./headers.h"
#include <vector>

int main(int argc, char *argv[]) {

  let word = "world";
  console.log("Hello", word, "!");
  
  var a = 12;
  console.log("a:", a);

  let myHtml = fetch("https://example.com");
  console.log("Example Code:", myHtml);

  /* fetchOptions.method = "POST";
  fetchOptions.data = "name=StringManolo&pass=123";
  myHtml = fetch("https://example.com");
  console.log("Post Request return:", myHtml); */

  let myCsv = split("car, bike, motorbike, truck, airplane", ", ");
  for(let i = 0; i < myCsv.size(); ++i) {
    console.log("CSV N°", i+1 , ":", myCsv[i]);
  }

  console.log("Replacing hola from hola world to hello:", 
  replace("hola world!", "hola", "hello"));
  return 0;
}
