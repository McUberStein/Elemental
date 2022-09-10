#include "element.hpp"

using namespace element;
using namespace std;

types::elenium_t utils::stoen(string exp, string strarr[]){
  if(!flags::CASE)
    exp[0] = toupper(exp[0]), exp[1] = tolower(exp[1]);
  for(int i = 0; i < info::n_of_elements; i++){
    if(exp == strarr[i]){
      int out = i + 1;
      return (types::elenium_t)out;
    }
  }
  return types::ERR;
}

string utils::entos(int num, string strarr[]){
  return strarr[num-1];
}
