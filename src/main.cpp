#include "element.hpp"
#include <bits/stdc++.h>

#define GAS E.stp_state = types::gas
#define SOL E.stp_state = types::solid
#define LIQ E.stp_state = types::liquid
#define OTH E.stp_state = types::unknown
#define RAD E.radioactive = true

using namespace std;
using namespace element;


int main(int argc, char *argv[]){
      string uinp;
      types::element_t E;
      E.radioactive = false;

      utils::handle_args(argc, argv);
      cout << (flags::COLOR ? DARKGREEN : NOCOLOR) << "Enter an element: " << NOCOLOR;
      getline(cin, uinp);


      auto sign = utils::stoen(uinp, info::list);
      if(sign != types::ERR){

            E.sign = utils::entos((int)sign, info::list);
            E.atomic = (int)sign;

            switch(sign){

            case types::H:
                  E.name = "Hydrogen";
                  E.mass = 1.008;
                  E.group = 1;
                  E.period = 1;
                  GAS;
                  break;

            case types::He:
                  E.name = "Helium";
                  E.mass = 4.00;
                  E.group = 18;
                  E.period = 1;
                  GAS;
                  break;

            case types::Li:
                  E.name = "Lithium";
                  E.mass = 4;
                  E.group = 2;
                  E.period = 1;
                  SOL;
                  break;

            case types::Be:
                  E.name = "Beryllium";
                  E.mass = 9.012;
                  E.group = 2;
                  E.period = 2;
                  SOL;
                  break;

            case types::B:
                  E.name = "Boron";
                  E.mass = 10.81;
                  E.group = 13;
                  E.period = 2;
                  SOL;
                  break;

            case types::C:
                  E.name = "Carbon";
                  E.mass = 12.011;
                  E.group = 14;
                  E.period = 2;
                  SOL;
                  break;

            case types::N:
                  E.name = "Nitrogen";
                  E.mass = 14.007;
                  E.group = 15;
                  E.period = 2;
                  GAS;
                  break;

            case types::O:
                  E.name = "Oxygen";
                  E.mass = 15.999;
                  E.group = 16;
                  E.period = 2;
                  GAS;
                  break;

            case types::F:
                  E.name = "Fluorine";
                  E.mass = 18.998;
                  E.group = 17;
                  E.period = 2;
                  GAS;
                  break;

            case types::Ne:
                  E.name = "Neon";
                  E.mass = 20.180;
                  E.group = 18;
                  E.period = 2;
                  GAS;
                  break;

            case types::Na:
                  E.name = "Sodium";
                  E.mass = 22.990;
                  E.group = 1;
                  E.period = 3;
                  SOL;
                  break;

            case types::Mg:
                  E.name = "Magnesium";
                  E.mass = 24.306;
                  E.group = 2;
                  E.period = 3;
                  SOL;
                  break;

            case types::Al:
                  E.name = "Aluminium";
                  E.mass = 26.982;
                  E.group = 13;
                  E.period = 3;
                  SOL;
                  break;

            case types::Si:
                  E.name = "Silicon";
                  E.mass = 28.085;
                  E.group = 14;
                  E.period = 3;
                  SOL;
                  break;

            case types::P:
                  E.name = "Phosphorus";
                  E.mass = 30.974;
                  E.group = 15;
                  E.period = 3;
                  SOL;
                  break;

            case types::S:
                  E.name = "Sulfur";
                  E.mass = 32.06;
                  E.group = 16;
                  E.period = 3;
                  SOL;
                  break;

            case types::Cl:
                  E.name = "Chlorine";
                  E.mass = 35.45;
                  E.group = 17;
                  E.period = 3;
                  GAS;
                  break;

            case types::Ar:
                  E.name = "Argon";
                  E.mass = 39.948;
                  E.group = 18;
                  E.period = 3;
                  GAS;
                  break;

            case types::K:
                  E.name = "Potassium";
                  E.mass = 39.098;
                  E.group = 1;
                  E.period = 4;
                  SOL;
                  break;

            case types::Ca:
                  E.name = "Calcium";
                  E.mass = 40.078;
                  E.group = 2;
                  E.period = 4;
                  SOL;
                  break;

            case types::Sc:
                  E.name = "Scandium";
                  E.mass = 44.956;
                  E.group = 3;
                  E.period = 4;
                  SOL;
                  break;

            case types::Ti:
                  E.name = "Titanium";
                  E.mass = 47.867;
                  E.group = 4;
                  E.period = 4;
                  SOL;
                  break;

            case types::V:
                  E.name = "Vanadium";
                  E.mass = 50.942;
                  E.group = 5;
                  E.period = 4;
                  SOL;
                  break;

            case types::Cr:
                  E.name = "Chromium";
                  E.mass = 51.996;
                  E.group = 6;
                  E.period = 4;
                  SOL;
                  break;

            case types::Mn:
                  E.name = "Manganese";
                  E.mass = 54.938;
                  E.group = 7;
                  E.period = 4;
                  SOL;
                  break;

            case types::Fe:
                  E.name = "Iron";
                  E.mass = 55.845;
                  E.group = 8;
                  E.period = 4;
                  SOL;
                  break;

            case types::Co:
                  E.name = "Cobalt";
                  E.mass = 58.933;
                  E.group = 9;
                  E.period = 4;
                  SOL;
                  break;

            case types::Ni:
                  E.name = "Nickel";
                  E.mass = 58.693;
                  E.group = 10;
                  E.period = 4;
                  SOL;
                  break;

            case types::Cu:
                  E.name = "Copper";
                  E.mass = 63.546;
                  E.group = 11;
                  E.period = 4;
                  SOL;
                  break;

            case types::Zn:
                  E.name = "Zinc";
                  E.mass = 65.38;
                  E.group = 12;
                  E.period = 4;
                  SOL;
                  break;

            case types::Ga:
                  E.name = "Gallium";
                  E.mass = 69.723;
                  E.group = 13;
                  E.period = 4;
                  SOL;
                  break;

            case types::Ge:
                  E.name = "Germanium";
                  E.mass = 72.630;
                  E.group = 14;
                  E.period = 4;
                  SOL;
                  break;

            case types::As:
                  E.name = "Arsenic";
                  E.mass = 74.922;
                  E.group = 15;
                  E.period = 4;
                  SOL;
                  break;

            case types::Se:
                  E.name = "Selenium";
                  E.mass = 78.971;
                  E.group = 16;
                  E.period = 4;
                  SOL;
                  break;

            case types::Br:
                  E.name = "Bromine";
                  E.mass = 79.904;
                  E.group = 17;
                  E.period = 4;
                  LIQ;
                  break;

            case types::Kr:
                  E.name = "Krypton";
                  E.mass = 83.798;
                  E.group = 18;
                  E.period = 4;
                  GAS;
                  break;

            case types::Rb:
                  E.name = "Rubidium";
                  E.mass = 85.468;
                  E.group = 1;
                  E.period = 5;
                  SOL;
                  break;

            case types::Sr:
                  E.name = "Strontium";
                  E.mass = 87.62;
                  E.group = 2;
                  E.period = 5;
                  SOL;
                  break;

            case types::Y:
                  E.name = "Yttrium";
                  E.mass = 88.906;
                  E.group = 3;
                  E.period = 5;
                  SOL;
                  break;

            case types::Zr:
                  E.name = "Zirconium";
                  E.mass = 91.224;
                  E.group = 4;
                  E.period = 5;
                  SOL;
                  break;

            case types::Nb:
                  E.name = "Niobium";
                  E.mass = 92.906;
                  E.group = 5;
                  E.period = 5;
                  SOL;
                  break;

            case types::Mo:
                  E.name = "Molybdenum";
                  E.mass = 95.95;
                  E.group = 6;
                  E.period = 5;
                  SOL;
                  break;

            case types::Tc:
                  E.name = "Technetium";
                  E.mass = 98;
                  E.group = 7;
                  E.period = 5;
                  RAD;
                  SOL;
                  break;

            case types::Ru:
                  E.name = "Ruthenium";
                  E.mass = 101.07;
                  E.group = 8;
                  E.period = 5;
                  SOL;
                  break;

            case types::Rh:
                  E.name = "Rhodium";
                  E.mass = 102.91;
                  E.group = 9;
                  E.period = 5;
                  SOL;
                  break;

            case types::Pd:
                  E.name = "Palladium";
                  E.mass = 106.42;
                  E.group = 10;
                  E.period = 5;
                  SOL;
                  break;

            case types::Ag:
                  E.name = "Silver";
                  E.mass = 107.87;
                  E.group = 11;
                  E.period = 5;
                  SOL;
                  break;

            case types::Cd:
                  E.name = "Cadmium";
                  E.mass = 112.41;
                  E.group = 12;
                  E.period = 5;
                  SOL;
                  break;

            case types::In:
                  E.name = "Indium";
                  E.mass = 114.82;
                  E.group = 13;
                  E.period = 5;
                  SOL;
                  break;

            case types::Sn:
                  E.name = "Tin";
                  E.mass = 118.71;
                  E.group = 14;
                  E.period = 5;
                  SOL;
                  break;

            case types::Sb:
                  E.name = "Antimony";
                  E.mass = 121.76;
                  E.group = 15;
                  E.period = 5;
                  SOL;
                  break;

            case types::Te:
                  E.name = "Tellurium";
                  E.mass = 127.60;
                  E.group = 16;
                  E.period = 5;
                  SOL;
                  break;

            case types::I:
                  E.name = "Iodine";
                  E.mass = 126.90;
                  E.group = 17;
                  E.period = 5;
                  SOL;
                  break;

            case types::Xe:
                  E.name = "Xenon";
                  E.mass = 131.29;
                  E.group = 18;
                  E.period = 5;
                  GAS;
                  break;

            case types::Cs:
                  E.name = "Caesium";
                  E.mass = 132.91;
                  E.group = 1;
                  E.period = 6;
                  SOL;
                  break;

            case types::Ba:
                  E.name = "Barium";
                  E.mass = 137.33;
                  E.group = 2;
                  E.period = 6;
                  SOL;
                  break;

            case types::La:
                  E.name = "Lanthanum";
                  E.mass = 138.91;
                  E.group = 3;
                  E.period = 6;
                  SOL;
                  break;

            case types::Ce:
                  E.name = "Cerium";
                  E.mass = 140.12;
                  E.group = 3;
                  E.period = 6;
                  SOL;
                  break;

            case types::Pr:
                  E.name = "Praseodymium";
                  E.mass = 140.91;
                  E.group = 3;
                  E.period = 6;
                  SOL;
                  break;

            case types::Nd:
                  E.name = "Neodymium";
                  E.mass = 144.24;
                  E.group = 3;
                  E.period = 6;
                  SOL;
                  break;

            case types::Pm:
                  E.name = "Promethium";
                  E.mass = 145;
                  E.group = 3;
                  E.period = 6;
                  SOL;
                  break;

            case types::Sm:
                  E.name = "Samarium";
                  E.mass = 150.36;
                  E.group = 3;
                  E.period = 6;
                  SOL;
                  break;

            case types::Eu:
                  E.name = "Europium";
                  E.mass = 151.96;
                  E.group = 3;
                  E.period = 6;
                  SOL;
                  break;

            case types::Gd:
                  E.name = "Gadolinium";
                  E.mass = 157.25;
                  E.group = 3;
                  E.period = 6;
                  SOL;
                  break;

            case types::Tb:
                  E.name = "Terbium";
                  E.mass = 158.93;
                  E.group = 3;
                  E.period = 6;
                  SOL;
                  break;

            case types::Dy:
                  E.name = "Dysprosium";
                  E.mass = 162.50;
                  E.group = 3;
                  E.period = 6;
                  SOL;
                  break;

            case types::Ho:
                  E.name = "Holmium";
                  E.mass = 164.93;
                  E.group = 3;
                  E.period = 6;
                  SOL;
                  break;

            case types::Er:
                  E.name = "Erbium";
                  E.mass = 167.26;
                  E.group = 3;
                  E.period = 6;
                  SOL;
                  break;

            case types::Tm:
                  E.name = "Thulium";
                  E.mass = 168.93;
                  E.group = 3;
                  E.period = 6;
                  SOL;
                  break;

            case types::Yb:
                  E.name = "Ytterbium";
                  E.mass = 173.05;
                  E.group = 3;
                  E.period = 6;
                  SOL;
                  break;

            case types::Lu:
                  E.name = "Lutetium";
                  E.mass = 174.97;
                  E.group = 3;
                  E.period = 6;
                  SOL;
                  break;

            case types::Hf:
                  E.name = "Hafnium";
                  E.mass = 178.49;
                  E.group = 4;
                  E.period = 6;
                  SOL;
                  break;

            case types::Ta:
                  E.name = "Tantalum";
                  E.mass = 180.95;
                  E.group = 5;
                  E.period = 6;
                  SOL;
                  break;

            case types::W:
                  E.name = "Tungsten";
                  E.mass = 183.84;
                  E.group = 6;
                  E.period = 6;
                  SOL;
                  break;

            case types::Re:
                  E.name = "Rhenium";
                  E.mass = 186.21;
                  E.group = 7;
                  E.period = 6;
                  SOL;
                  break;

            case types::Os:
                  E.name = "Osmium";
                  E.mass = 190.23;
                  E.group = 8;
                  E.period = 6;
                  SOL;
                  break;

            case types::Ir:
                  E.name = "Iridium";
                  E.mass = 192.22;
                  E.group = 9;
                  E.period = 6;
                  SOL;
                  break;

            case types::Pt:
                  E.name = "Platinum";
                  E.mass = 195.08;
                  E.group = 10;
                  E.period = 6;
                  SOL;
                  break;

            case types::Au:
                  E.name = "Gold";
                  E.mass = 196.97;
                  E.group = 11;
                  E.period = 6;
                  SOL;
                  break;

            case types::Hg:
                  E.name = "Mercury";
                  E.mass = 200.59;
                  E.group = 12;
                  E.period = 6;
                  LIQ;
                  break;

            case types::Tl:
                  E.name = "Thallium";
                  E.mass = 204.38;
                  E.group = 13;
                  E.period = 6;
                  SOL;
                  break;

            case types::Pb:
                  E.name = "Lead";
                  E.mass = 207.2;
                  E.group = 14;
                  E.period = 6;
                  SOL;
                  break;

            case types::Bi:
                  E.name = "Bismuth";
                  E.mass = 208.98;
                  E.group = 15;
                  E.period = 6;
                  SOL;
                  break;

            case types::Po:
                  E.name = "Polonium";
                  E.mass = 209;
                  E.group = 16;
                  E.period = 6;
                  RAD;
                  SOL;
                  break;

            case types::At:
                  E.name = "Astatine";
                  E.mass = 210;
                  E.group = 17;
                  E.period = 6;
                  RAD;
                  SOL;
                  break;

            case types::Rn:
                  E.name = "Radon";
                  E.mass = 222;
                  E.group = 18;
                  E.period = 6;
                  RAD;
                  GAS;
                  break;

            case types::Fr:
                  E.name = "Francium";
                  E.mass = 223;
                  E.group = 1;
                  E.period = 7;
                  RAD;
                  SOL;
                  break;


            case types::Ra:
                  E.name = "Radium";
                  E.mass = 226;
                  E.group = 2;
                  E.period = 7;
                  RAD;
                  SOL;
                  break;

            case types::Ac:
                  E.name = "Actinium";
                  E.mass = 227;
                  E.group = 3;
                  E.period = 7;
                  RAD;
                  SOL;
                  break;

            case types::Th:
                  E.name = "Thorium";
                  E.mass = 232.04;
                  E.group = 3;
                  E.period = 7;
                  RAD;
                  SOL;
                  break;

            case types::Pa:
                  E.name = "Protactinium";
                  E.mass = 231.04;
                  E.group = 3;
                  E.period = 7;
                  RAD;
                  SOL;
                  break;


            case types::U:
                  E.name = "Uranium";
                  E.mass = 238.03;
                  E.group = 3;
                  E.period = 7;
                  RAD;
                  SOL;
                  break;

            case types::Np:
                  E.name = "Neptunium";
                  E.mass = 237;
                  E.group = 3;
                  E.period = 7;
                  RAD;
                  SOL;
                  break;

            case types::Pu:
                  E.name = "Plutonium";
                  E.mass = 244;
                  E.group = 3;
                  E.period = 7;
                  RAD;
                  SOL;
                  break;

            case types::Am:
                  E.name = "Americium";
                  E.mass = 243;
                  E.group = 3;
                  E.period = 7;
                  RAD;
                  SOL;
                  break;

            case types::Cm:
                  E.name = "Curium";
                  E.mass = 247;
                  E.group = 3;
                  E.period = 7;
                  RAD;
                  SOL;
                  break;

            case types::Bk:
                  E.name = "Berkelium";
                  E.mass = 247;
                  E.group = 3;
                  E.period = 7;
                  RAD;
                  SOL;
                  break;

            case types::Cf:
                  E.name = "Californium";
                  E.mass = 251;
                  E.group = 3;
                  E.period = 7;
                  RAD;
                  SOL;
                  break;

            case types::Es:
                  E.name = "Einsteinium";
                  E.mass = 252;
                  E.group = 3;
                  E.period = 7;
                  RAD;
                  SOL;
                  break;

            case types::Fm:
                  E.name = "Fermium";
                  E.mass = 257;
                  E.group = 3;
                  E.period = 7;
                  RAD;
                  SOL;
                  break;

            case types::Md:
                  E.name = "Mendelevium";
                  E.mass = 258;
                  E.group = 3;
                  E.period = 7;
                  RAD;
                  SOL;
                  break;

            case types::No:
                  E.name = "Nobelium";
                  E.mass = 259;
                  E.group = 3;
                  E.period = 7;
                  RAD;
                  SOL;
                  break;

            case types::Lr:
                  E.name = "Lawrencium";
                  E.mass = 266;
                  E.group = 3;
                  E.period = 7;
                  RAD;
                  SOL;
                  break;

            case types::Rf:
                  E.name = "Rutherfordium";
                  E.mass = 267;
                  E.group = 4;
                  E.period = 7;
                  RAD;
                  SOL;
                  break;

            case types::Db:
                  E.name = "Dubnium";
                  E.mass = 268;
                  E.group = 5;
                  E.period = 7;
                  RAD;
                  OTH;
                  break;

            case types::Sg:
                  E.name = "Seaborgium";
                  E.mass = 269;
                  E.group = 6;
                  E.period = 7;
                  RAD;
                  OTH;
                  break;

            case types::Bh:
                  E.name = "Bohrium";
                  E.mass = 270;
                  E.group = 7;
                  E.period = 7;
                  RAD;
                  OTH;
                  break;

            case types::Hs:
                  E.name = "Hassium";
                  E.mass = 277;
                  E.group = 8;
                  E.period = 7;
                  RAD;
                  OTH;
                  break;

            case types::Mt:
                  E.name = "Meitnerium";
                  E.mass = 278;
                  E.group = 9;
                  E.period = 7;
                  RAD;
                  OTH;
                  break;

            case types::Ds:
                  E.name = "Darmstadtium";
                  E.mass = 281;
                  E.group = 10;
                  E.period = 7;
                  RAD;
                  OTH;
                  break;

            case types::Rg:
                  E.name = "Roentgenium";
                  E.mass = 282;
                  E.group = 11;
                  E.period = 7;
                  RAD;
                  OTH;
                  break;

            case types::Cn:
                  E.name = "Copernicium";
                  E.mass = 285;
                  E.group = 12;
                  E.period = 7;
                  RAD;
                  OTH;
                  break;

            case types::Nh:
                  E.name = "Nihonium";
                  E.mass = 286;
                  E.group = 13;
                  E.period = 7;
                  RAD;
                  OTH;
                  break;

            case types::Fl:
                  E.name = "Flerovium";
                  E.mass = 289;
                  E.group = 14;
                  E.period = 7;
                  RAD;
                  OTH;
                  break;

            case types::Mc:
                  E.name = "Moscovium";
                  E.mass = 290;
                  E.group = 15;
                  E.period = 7;
                  RAD;
                  OTH;
                  break;

            case types::Lv:
                  E.name = "Livermorium";
                  E.mass = 293;
                  E.group = 16;
                  E.period = 7;
                  RAD;
                  OTH;
                  break;

            case types::Ts:
                  E.name = "Tennessine";
                  E.mass = 294;
                  E.group = 17;
                  E.period = 7;
                  RAD;
                  OTH;
                  break;

            case types::Og:
                  E.name = "Oganesson";
                  E.mass = 294;
                  E.group = 18;
                  E.period = 7;
                  RAD;
                  OTH;
                  break;
            }

            cout << setprecision(3) << fixed;
            if(flags::NAME)
                  cout << (flags::COLOR ? DARKBLUE : NOCOLOR) << "Name: " << NOCOLOR << E.name << endl;
            if(flags::SIGN && !flags::NAME_ONLY)
                  cout <<  (flags::COLOR ? DARKBLUE : NOCOLOR) << "Sign: " << NOCOLOR << E.sign << endl;
            if(flags::ATOMIC && !flags::NAME_ONLY)
                  cout << (flags::COLOR ? DARKBLUE : NOCOLOR) << "Atomic number: " << NOCOLOR << E.atomic << endl;
            if(flags::MASS && !flags::NAME_ONLY)
                  cout << (flags::COLOR ? DARKBLUE : NOCOLOR) << "Mass: " << NOCOLOR << E.mass << endl;
            if(flags::STP_STATE && !flags::NAME_ONLY)
                  cout << (flags::COLOR ? DARKBLUE : NOCOLOR) << "State at STP: " << NOCOLOR << utils::entos((int)E.stp_state, info::states) << endl;
            if(flags::POS && !flags::NAME_ONLY)
                  cout << (flags::COLOR ? DARKBLUE : NOCOLOR) << "Periodic table position: " << NOCOLOR << "Group " << E.group << " Period " << E.period << endl;
            if(flags::RADS && !flags::NAME_ONLY)
                  cout << (flags::COLOR ? DARKGREEN : NOCOLOR) << "Radioactive: " << NOCOLOR << (E.radioactive ? "Yes" : "No") << endl;
      } // Element is found
      else {
            cout << DARKRED << "Element not found" << endl;
      }
      return 0;
}
