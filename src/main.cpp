#include "element.hpp"
#include <iomanip>

#pragma clang diagnostic ignored "-Wswitch"

using namespace std;
using namespace element;

void ERR(void);

int main(int argc, char *argv[]){
      string uinp;
      utils::handle_args(argc, argv);

      cout << (flags::COLOR ? DARKGREEN : NOCOLOR) << (flags::BYNUM_M ? "Enter a number: " : "Enter an element");
      if(flags::FULLNAME_M && !flags::BYNUM_M)
            cout << "(full name): " << NOCOLOR;
      else if(!flags::FULLNAME_M && !flags::BYNUM_M)
            cout << ": " << NOCOLOR;
      getline(cin, uinp);

      if(flags::BYNUM_M && uinp.length() > 9)
            ERR();

      auto sign = (flags::BYNUM_M ? stoi(uinp) : utils::stoen(uinp, (flags::FULLNAME_M ? info::list_long : info::list)));
      auto E = utils::get_element((int)sign);

      if(E != NULL){
      cout << setprecision(3) << fixed;
            if(flags::NAME)
                  cout << (flags::COLOR ? DARKBLUE : NOCOLOR) << "Name: " << NOCOLOR << E->name << endl;
            if(flags::SIGN && !flags::NAME_ONLY)
                  cout <<  (flags::COLOR ? DARKBLUE : NOCOLOR) << "Sign: " << NOCOLOR << E->sign << endl;
            if(flags::ATOMIC && !flags::NAME_ONLY)
                  cout << (flags::COLOR ? DARKBLUE : NOCOLOR) << "Atomic number: " << NOCOLOR << E->atomic << endl;
            if(flags::MASS && !flags::NAME_ONLY)
                  cout << (flags::COLOR ? DARKBLUE : NOCOLOR) << "Mass: " << NOCOLOR << E->mass << endl;
            if(flags::STP_STATE && !flags::NAME_ONLY)
                  cout << (flags::COLOR ? DARKBLUE : NOCOLOR) << "State at STP: " << NOCOLOR << utils::entos((int)E->stp_state, info::states) << endl;
            if(flags::POS && !flags::NAME_ONLY)
                  cout << (flags::COLOR ? DARKBLUE : NOCOLOR) << "Periodic table position: " << NOCOLOR << "Group " << E->group << " Period " << E->period << endl;
            if(flags::RADS && !flags::NAME_ONLY)
                  cout << (flags::COLOR ? DARKGREEN : NOCOLOR) << "Radioactive: " << NOCOLOR << (E->radioactive ? "Yes" : "No") << endl;
      } // Element is found

      else {
            ERR();
      }

      return 0;
}

void ERR(void){
      cout << DARKRED << (flags::BYNUM_M ? "Number out of range" : "Element not found") << endl;
      RESCOLOR;
      exit(1);
}
