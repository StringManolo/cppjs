#include "./headers.h"
#include <vector>

int main(ARGUMENTS) {


  let word = "world";
  console.log("Hello", word, "!");

  var a = 12;
  console.log(a);
 
  a = "hello";
  console.log(a);

  let test = 6*8;
  console.log(test, ""); 

  let myHtml = fetch("http://example.com");
  console.log("Downloaded!");
  console.log("Example Code:", myHtml);

  fetchOptions.method = "POST";
  fetchOptions.data = "name=StringManolo&pass=123"; 
  myHtml = fetch("http://example.com");
  console.log("Post Request return:", myHtml);

  let myCsv = split("car, bike, motorbike, truck, airplane", ", ");
  for(let i = 0; i < myCsv.size(); ++i) {
    console.log("CSV N°", i+1 , ":", myCsv[i]);
  }

  console.log(myCsv);

  console.log("Replacing hola from hola world to hello:", 
  replace("hola world!", "hola", "hello"));

  int testing = 1337;
  console.log(testing);

  console.log("CSV string:", join(myCsv, ","));


  for(let vehicle in myCsv) {
    console.log("Vehicle:", vehicle);
  }

  let add = function(let num1, let num2) {
    return num1 + num2;
  };

  console.log("Add 7 + 8 using function:", add(7,8));


  return 0;
}
