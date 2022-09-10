#include "element.hpp"
#include <getopt.h>
#include <unistd.h>

#define START "  "

using namespace std;
using namespace element;


void utils::handle_args(int argc, char *argv[]){
  int c;
  while((c = getopt_long(argc, argv, "Armnsphdci", info::long_opts, NULL)) != -1){
    switch(c){
    case 'A':
      flags::NAME = true;
      flags::SIGN = true;
      flags::MASS = true;
      flags::ATOMIC = true;
      flags::POS = true;
      flags::STP_STATE = true;
      flags::RADS = true;
      break;

    case 'r':
      flags::RADS = true;
      break;

    case 'm':
      flags::MASS = true;
      break;

    case 'n':
      flags::NAME_ONLY = true;
      break;

    case 's':
      flags::POS = true;
      break;

    case 'p':
      flags::POS = true;
      break;

    case 'h':
      cout << "Usage: elemental [OPTION]..." << endl;
      cout << "Show information about a certain element" << endl;
      cout << START << "-A, --all" << "              print all values" << endl;
      cout << START << "-r, --rad" << "              print element radioactivity" << endl;
      cout << START << "-m, --mass" << "             print element mass" << endl;
      cout << START << "-n, --name-only" << "        only print the element name" << endl;
      cout << START << "-s, --stp-state" << "        print the element state at STP" << endl;
      cout << START << "-p, --position" << "         print the element's group and period" << endl;
      cout << START << "-d, --dump-elements" << "    dump the number of elements and exit" << endl;
      cout << START << "-c, --no-color" << "         disable colorful output" << endl;
      cout << START << "-i, --insensitive" << "      disable case sensitivity" << endl;
      cout << START << "-h, --help" << "             print this help screen" << endl;
      cout << endl << "Elemental 0.1" << endl << "by McUberStein3301" << endl << "Licensed under GPLv3" << endl;
      exit(0);
      break;

    case 'd':
      cout << "Number of elements: " << info::n_of_elements << endl;
      exit(0);
      break;

    case 'c':
      flags::COLOR = false;
      break;

    case 'i':
      flags::CASE = false;
      break;

    case '?':
    default:
      cout << "Try 'elemental --help' for more information." << endl;
      exit(1);
      break;
    }
  }
}
