#pragma once

#include <iostream>
#include <string>
#include <unistd.h>
#include <curl/curl.h>                                                
                                                                      static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp) {
  ((std::string*)userp)->append((char*)contents, size * nmemb);
  return size * nmemb;
}

auto http_get(std::string url) {
  CURL *curl;
  CURLcode res;
  std::string readBuffer;

  curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
    res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);                                                                                                                
  }

  return readBuffer;
}

auto fetch(std::string url) {
/* If string url == http then
 * http_get(url)
 * end
 * */

  return http_get(url);
}
