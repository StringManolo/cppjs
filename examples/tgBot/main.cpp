#include "../../headers.h"

/* Get your token using BotFather (This is Telgram Official Bot Api)
https://t.me/BotFather 

Write in chat /newbot and follow instructions.
*/
#define TOKEN "***"

/* Compile this program with: 
$ g++ -o test main.cpp -lcurl
*/

int main(ARGUMENTS) {
  let messages = fetch("https://api.telegram.org/bot" TOKEN "/getUpdates");

  let parsed = JSON.parse(messages);
  console.log(parsed["ok"]);



  return 0;
}
