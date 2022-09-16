#include "element.hpp"

#define E __element_ptr
#define GAS E.stp_state = types::gas
#define SOL E.stp_state = types::solid
#define LIQ E.stp_state = types::liquid
#define OTH E.stp_state = types::unknown
#define RAD E.radioactive = true

using namespace element;
using namespace std;

bool utils::isnum(string str){
  for(int i = 0; i < (int)str.length(); i++){
    if(isdigit(str[i]) == 0)
      return false;
  }
  return true;
}

types::elenium_t utils::stoen(string exp, string strarr[]){
  if(!flags::CASE){
    exp[0] = toupper(exp[0]);
    for(int c = 1; c < (int)exp.length(); c++)
      exp[c] = tolower(exp[c]);
  }
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

types::element_t *utils::get_element(int num){
  static types::element_t __element_ptr;

  if(num <= info::n_of_elements){
    E.sign = utils::entos((types::elenium_t)num, info::list);
    E.atomic = num;
    E.name = info::list_long[num-1];

    switch(num){
    case types::H:
      E.mass = 1.008;
      E.group = 1;
      E.period = 1;
      GAS;
      break;

    case types::He:
      E.mass = 4.00;
      E.group = 18;
      E.period = 1;
      GAS;
      break;

    case types::Li:
      E.mass = 4;
      E.group = 2;
      E.period = 1;
      SOL;
      break;

    case types::Be:
      E.mass = 9.012;
      E.group = 2;
      E.period = 2;
      SOL;
      break;

    case types::B:
      E.mass = 10.81;
      E.group = 13;
      E.period = 2;
      SOL;
      break;

    case types::C:
      E.mass = 12.011;
      E.group = 14;
      E.period = 2;
      SOL;
      break;

    case types::N:
      E.mass = 14.007;
      E.group = 15;
      E.period = 2;
      GAS;
      break;

    case types::O:
      E.mass = 15.999;
      E.group = 16;
      E.period = 2;
      GAS;
      break;

    case types::F:
      E.mass = 18.998;
      E.group = 17;
      E.period = 2;
      GAS;
      break;

    case types::Ne:
      E.mass = 20.180;
      E.group = 18;
      E.period = 2;
      GAS;
      break;

    case types::Na:
      E.mass = 22.990;
      E.group = 1;
      E.period = 3;
      SOL;
      break;

    case types::Mg:
      E.mass = 24.306;
      E.group = 2;
      E.period = 3;
      SOL;
      break;

    case types::Al:
      E.mass = 26.982;
      E.group = 13;
      E.period = 3;
      SOL;
      break;

    case types::Si:
      E.mass = 28.085;
      E.group = 14;
      E.period = 3;
      SOL;
      break;

    case types::P:
      E.mass = 30.974;
      E.group = 15;
      E.period = 3;
      SOL;
      break;

    case types::S:
      E.mass = 32.06;
      E.group = 16;
      E.period = 3;
      SOL;
      break;

    case types::Cl:
      E.mass = 35.45;
      E.group = 17;
      E.period = 3;
      GAS;
      break;

    case types::Ar:
      E.mass = 39.948;
      E.group = 18;
      E.period = 3;
      GAS;
      break;

    case types::K:
      E.mass = 39.098;
      E.group = 1;
      E.period = 4;
      SOL;
      break;

    case types::Ca:
      E.mass = 40.078;
      E.group = 2;
      E.period = 4;
      SOL;
      break;

    case types::Sc:
      E.mass = 44.956;
      E.group = 3;
      E.period = 4;
      SOL;
      break;

    case types::Ti:
      E.mass = 47.867;
      E.group = 4;
      E.period = 4;
      SOL;
      break;

    case types::V:
      E.mass = 50.942;
      E.group = 5;
      E.period = 4;
      SOL;
      break;

    case types::Cr:
      E.mass = 51.996;
      E.group = 6;
      E.period = 4;
      SOL;
      break;

    case types::Mn:
      E.mass = 54.938;
      E.group = 7;
      E.period = 4;
      SOL;
      break;

    case types::Fe:
      E.mass = 55.845;
      E.group = 8;
      E.period = 4;
      SOL;
      break;

    case types::Co:
      E.mass = 58.933;
      E.group = 9;
      E.period = 4;
      SOL;
      break;

    case types::Ni:
      E.mass = 58.693;
      E.group = 10;
      E.period = 4;
      SOL;
      break;

    case types::Cu:
      E.mass = 63.546;
      E.group = 11;
      E.period = 4;
      SOL;
      break;

    case types::Zn:
      E.mass = 65.38;
      E.group = 12;
      E.period = 4;
      SOL;
      break;

    case types::Ga:
      E.mass = 69.723;
      E.group = 13;
      E.period = 4;
      SOL;
      break;

    case types::Ge:
      E.mass = 72.630;
      E.group = 14;
      E.period = 4;
      SOL;
      break;

    case types::As:
      E.mass = 74.922;
      E.group = 15;
      E.period = 4;
      SOL;
      break;

    case types::Se:
      E.mass = 78.971;
      E.group = 16;
      E.period = 4;
      SOL;
      break;

    case types::Br:
      E.mass = 79.904;
      E.group = 17;
      E.period = 4;
      LIQ;
      break;

    case types::Kr:
      E.mass = 83.798;
      E.group = 18;
      E.period = 4;
      GAS;
      break;

    case types::Rb:
      E.mass = 85.468;
      E.group = 1;
      E.period = 5;
      SOL;
      break;

    case types::Sr:
      E.mass = 87.62;
      E.group = 2;
      E.period = 5;
      SOL;
      break;

    case types::Y:
      E.mass = 88.906;
      E.group = 3;
      E.period = 5;
      SOL;
      break;

    case types::Zr:
      E.mass = 91.224;
      E.group = 4;
      E.period = 5;
      SOL;
      break;

    case types::Nb:
      E.mass = 92.906;
      E.group = 5;
      E.period = 5;
      SOL;
      break;

    case types::Mo:
      E.mass = 95.95;
      E.group = 6;
      E.period = 5;
      SOL;
      break;

    case types::Tc:
      E.mass = 98;
      E.group = 7;
      E.period = 5;
      RAD;
      SOL;
      break;

    case types::Ru:
      E.mass = 101.07;
      E.group = 8;
      E.period = 5;
      SOL;
      break;

    case types::Rh:
      E.mass = 102.91;
      E.group = 9;
      E.period = 5;
      SOL;
      break;

    case types::Pd:
      E.mass = 106.42;
      E.group = 10;
      E.period = 5;
      SOL;
      break;

    case types::Ag:
      E.mass = 107.87;
      E.group = 11;
      E.period = 5;
      SOL;
      break;

    case types::Cd:
      E.mass = 112.41;
      E.group = 12;
      E.period = 5;
      SOL;
      break;

    case types::In:
      E.mass = 114.82;
      E.group = 13;
      E.period = 5;
      SOL;
      break;

    case types::Sn:
      E.mass = 118.71;
      E.group = 14;
      E.period = 5;
      SOL;
      break;

    case types::Sb:
      E.mass = 121.76;
      E.group = 15;
      E.period = 5;
      SOL;
      break;

    case types::Te:
      E.mass = 127.60;
      E.group = 16;
      E.period = 5;
      SOL;
      break;

    case types::I:
      E.mass = 126.90;
      E.group = 17;
      E.period = 5;
      SOL;
      break;

    case types::Xe:
      E.mass = 131.29;
      E.group = 18;
      E.period = 5;
      GAS;
      break;

    case types::Cs:
      E.mass = 132.91;
      E.group = 1;
      E.period = 6;
      SOL;
      break;

    case types::Ba:
      E.mass = 137.33;
      E.group = 2;
      E.period = 6;
      SOL;
      break;

    case types::La:
      E.mass = 138.91;
      E.group = 3;
      E.period = 6;
      SOL;
      break;

    case types::Ce:
      E.mass = 140.12;
      E.group = 3;
      E.period = 6;
      SOL;
      break;

    case types::Pr:
      E.mass = 140.91;
      E.group = 3;
      E.period = 6;
      SOL;
      break;

    case types::Nd:
      E.mass = 144.24;
      E.group = 3;
      E.period = 6;
      SOL;
      break;

    case types::Pm:
      E.mass = 145;
      E.group = 3;
      E.period = 6;
      SOL;
      break;

    case types::Sm:
      E.mass = 150.36;
      E.group = 3;
      E.period = 6;
      SOL;
      break;

    case types::Eu:
      E.mass = 151.96;
      E.group = 3;
      E.period = 6;
      SOL;
      break;

    case types::Gd:
      E.mass = 157.25;
      E.group = 3;
      E.period = 6;
      SOL;
      break;

    case types::Tb:
      E.mass = 158.93;
      E.group = 3;
      E.period = 6;
      SOL;
      break;

    case types::Dy:
      E.mass = 162.50;
      E.group = 3;
      E.period = 6;
      SOL;
      break;

    case types::Ho:
      E.mass = 164.93;
      E.group = 3;
      E.period = 6;
      SOL;
      break;

    case types::Er:
      E.mass = 167.26;
      E.group = 3;
      E.period = 6;
      SOL;
      break;

    case types::Tm:
      E.mass = 168.93;
      E.group = 3;
      E.period = 6;
      SOL;
      break;

    case types::Yb:
      E.mass = 173.05;
      E.group = 3;
      E.period = 6;
      SOL;
      break;

    case types::Lu:
      E.mass = 174.97;
      E.group = 3;
      E.period = 6;
      SOL;
      break;

    case types::Hf:
      E.mass = 178.49;
      E.group = 4;
      E.period = 6;
      SOL;
      break;

    case types::Ta:
      E.mass = 180.95;
      E.group = 5;
      E.period = 6;
      SOL;
      break;

    case types::W:
      E.mass = 183.84;
      E.group = 6;
      E.period = 6;
      SOL;
      break;

    case types::Re:
      E.mass = 186.21;
      E.group = 7;
      E.period = 6;
      SOL;
      break;

    case types::Os:
      E.mass = 190.23;
      E.group = 8;
      E.period = 6;
      SOL;
      break;

    case types::Ir:
      E.mass = 192.22;
      E.group = 9;
      E.period = 6;
      SOL;
      break;

    case types::Pt:
      E.mass = 195.08;
      E.group = 10;
      E.period = 6;
      SOL;
      break;

    case types::Au:
      E.mass = 196.97;
      E.group = 11;
      E.period = 6;
      SOL;
      break;

    case types::Hg:
      E.mass = 200.59;
      E.group = 12;
      E.period = 6;
      LIQ;
      break;

    case types::Tl:
      E.mass = 204.38;
      E.group = 13;
      E.period = 6;
      SOL;
      break;

    case types::Pb:
      E.mass = 207.2;
      E.group = 14;
      E.period = 6;
      SOL;
      break;

    case types::Bi:
      E.mass = 208.98;
      E.group = 15;
      E.period = 6;
      SOL;
      break;

    case types::Po:
      E.mass = 209;
      E.group = 16;
      E.period = 6;
      RAD;
      SOL;
      break;

    case types::At:
      E.mass = 210;
      E.group = 17;
      E.period = 6;
      RAD;
      SOL;
      break;

    case types::Rn:
      E.mass = 222;
      E.group = 18;
      E.period = 6;
      RAD;
      GAS;
      break;

    case types::Fr:
      E.mass = 223;
      E.group = 1;
      E.period = 7;
      RAD;
      SOL;
      break;


    case types::Ra:
      E.mass = 226;
      E.group = 2;
      E.period = 7;
      RAD;
      SOL;
      break;

    case types::Ac:
      E.mass = 227;
      E.group = 3;
      E.period = 7;
      RAD;
      SOL;
      break;

    case types::Th:
      E.mass = 232.04;
      E.group = 3;
      E.period = 7;
      RAD;
      SOL;
      break;

    case types::Pa:
      E.mass = 231.04;
      E.group = 3;
      E.period = 7;
      RAD;
      SOL;
      break;


    case types::U:
      E.mass = 238.03;
      E.group = 3;
      E.period = 7;
      RAD;
      SOL;
      break;

    case types::Np:
      E.mass = 237;
      E.group = 3;
      E.period = 7;
      RAD;
      SOL;
      break;

    case types::Pu:
      E.mass = 244;
      E.group = 3;
      E.period = 7;
      RAD;
      SOL;
      break;

    case types::Am:
      E.mass = 243;
      E.group = 3;
      E.period = 7;
      RAD;
      SOL;
      break;

    case types::Cm:
      E.mass = 247;
      E.group = 3;
      E.period = 7;
      RAD;
      SOL;
      break;

    case types::Bk:
      E.mass = 247;
      E.group = 3;
      E.period = 7;
      RAD;
      SOL;
      break;

    case types::Cf:
      E.mass = 251;
      E.group = 3;
      E.period = 7;
      RAD;
      SOL;
      break;

    case types::Es:
      E.mass = 252;
      E.group = 3;
      E.period = 7;
      RAD;
      SOL;
      break;

    case types::Fm:
      E.mass = 257;
      E.group = 3;
      E.period = 7;
      RAD;
      SOL;
      break;

    case types::Md:
      E.mass = 258;
      E.group = 3;
      E.period = 7;
      RAD;
      SOL;
      break;

    case types::No:
      E.mass = 259;
      E.group = 3;
      E.period = 7;
      RAD;
      SOL;
      break;

    case types::Lr:
      E.mass = 266;
      E.group = 3;
      E.period = 7;
      RAD;
      SOL;
      break;

    case types::Rf:
      E.mass = 267;
      E.group = 4;
      E.period = 7;
      RAD;
      SOL;
      break;

    case types::Db:
      E.mass = 268;
      E.group = 5;
      E.period = 7;
      RAD;
      OTH;
      break;

    case types::Sg:
      E.mass = 269;
      E.group = 6;
      E.period = 7;
      RAD;
      OTH;
      break;

    case types::Bh:
      E.mass = 270;
      E.group = 7;
      E.period = 7;
      RAD;
      OTH;
      break;

    case types::Hs:
      E.mass = 277;
      E.group = 8;
      E.period = 7;
      RAD;
      OTH;
      break;

    case types::Mt:
      E.mass = 278;
      E.group = 9;
      E.period = 7;
      RAD;
      OTH;
      break;

    case types::Ds:
      E.mass = 281;
      E.group = 10;
      E.period = 7;
      RAD;
      OTH;
      break;

    case types::Rg:
      E.mass = 282;
      E.group = 11;
      E.period = 7;
      RAD;
      OTH;
      break;

    case types::Cn:
      E.mass = 285;
      E.group = 12;
      E.period = 7;
      RAD;
      OTH;
      break;

    case types::Nh:
      E.mass = 286;
      E.group = 13;
      E.period = 7;
      RAD;
      OTH;
      break;

    case types::Fl:
      E.mass = 289;
      E.group = 14;
      E.period = 7;
      RAD;
      OTH;
      break;

    case types::Mc:
      E.mass = 290;
      E.group = 15;
      E.period = 7;
      RAD;
      OTH;
      break;

    case types::Lv:
      E.mass = 293;
      E.group = 16;
      E.period = 7;
      RAD;
      OTH;
      break;

    case types::Ts:
      E.mass = 294;
      E.group = 17;
      E.period = 7;
      RAD;
      OTH;
      break;

    case types::Og:
      E.mass = 294;
      E.group = 18;
      E.period = 7;
      RAD;
      OTH;
      break;

    default:
      return NULL;
      break;
    }

    return &__element_ptr;
  }
  else
    return NULL;
}
