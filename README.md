# cppjs
Some Javascript Sintax Sugar for C++

### Example:
```
#include "./headers.h"

int main(int argc, char *argv[]) {

  let word = "world";
  console.log("Hello ", word, "!");
  var a = 12;
  console.log("a:", a);

  let myHtml = fetch("https://example.com");
  console.log("Example Code:", myHtml);
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


