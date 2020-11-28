# cppjs
Some Javascript Sintax Sugar for C++

### Notice:
Since you can't declare global variables inside a function, the var keyword has nothing to do with var in javascript. The var keyword here is used as an alternative where the let keyword does not work.  
var allow you to reasign the same variable to other data types.  
When using let you may need to declare a new variable.  
You should use let where you can, since most functions are designed to work with specific data types, where var is a unique data type holding other type inside.  

Remember the purpouse of this library is not trying to implement javascript language, transpile or be a engine. It's made to program in C++, but using a short sintax and higher level approach.  
If you want to develop using full javascript you should go for node.js, deno, quickjs, ducktape...

### Example:
```
#include "./headers.h"
#include <vector>

int main(int argc, char *argv[]) {

  let word = "world";
  console.log("Hello", word, "!");

  var a = 12;
  console.log("a:", a);

  a = "Hello!";
  console.log(a);

  let myHtml = fetch("https://example.com");
  console.log("Example Code:", myHtml);

  fetchOptions.method = "POST";
  fetchOptions.data = "name=StringManolo&pass=123";
  myHtml = fetch("https://example.com");
  console.log("Post Request return:", myHtml);

  let myCsv = split("car, bike, motorbike, truck, airplane", ", ");
  for(let i = 0; i < myCsv.size(); ++i) {
    console.log("CSV N°", i+1 , ":", myCsv[i]);
  }

  console.log("Replacing hola from hola world to hello:",
  replace("hola world!", "hola", "hello"));

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
```
  
Compile Linux:  
```
g++ -o program main.cpp -lcurl
```
  
Compile Termux:  
+ First Time:
```
mkdir ~/../usr/myPrograms && cd ~/../usr/myPrograms && git clone https://github.com/StringManolo/cppjs.git && cd cppjs
pkg install libcurl && pkg install termux-elf-cleaner && ./compile
```


