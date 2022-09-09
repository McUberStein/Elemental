#include "element.hpp"

using namespace element;

std::string element::info::list[] = {"H",
                                    "He",
                                    "Li",
                                    "Be",
                                    "B",
                                    "C",
                                    "N",
                                    "O",
                                    "F",
                                    "Ne",
                                    "Na",
                                    "Mg",
                                    "Al",
                                    "Si",
                                    "P",
                                    "S",
                                    "Cl",
                                    "Ar",
                                    "K",
                                    "Ca",
                                    "Sc",
                                    "Ti",
                                    "V",
                                    "Cr",
                                    "Mn",
                                    "Fe",
                                    "Co",
                                    "Ni",
                                    "Cu",
                                    "Zn",
                                    "Ga",
                                    "Ge",
                                    "As",
                                    "Se",
                                    "Br",
                                    "Kr",
                                    "Rb",
                                    "Sr",
                                    "Y",
                                    "Zr",
                                    "Nb",
                                    "Mo",
                                    "Tc",
                                    "Ru",
                                    "Rh",
                                    "Pd",
                                    "Ag",
                                    "Cd",
                                    "In",
                                    "Sn",
                                    "Sb",
                                    "Te",
                                    "I",
                                    "Xe",
                                    "Cs",
                                    "Ba",
                                    "La",
                                    "Ce",
                                    "Pr",
                                    "Nd",
                                    "Pm",
                                    "Sm",
                                    "Eu",
                                    "Gd",
                                    "Tb",
                                    "Dy",
                                    "Ho",
                                    "Er",
                                    "Tm",
                                    "Yb",
                                    "Lu",
                                    "Hf",
                                    "Ta",
                                    "W",
                                    "Re",
                                    "Os",
                                    "Ir",
                                    "Pt",
                                    "Au",
                                    "Hg",
                                    "Tl",
                                    "Pb",
                                    "Bi",
                                    "Po",
                                    "At",
                                    "Rn",
                                    "Fr",
                                    "Ra",
                                    "Ac",
                                    "Th",
                                    "Pa",
                                    "U",
                                    "Np",
                                    "Pu",
                                    "Am",
                                    "Cm",
                                    "Bk",
                                    "Cf",
                                    "Es",
                                    "Fm",
                                    "Md",
                                    "No",
                                    "Lr",
                                    "Rf",
                                    "Db",
                                    "Sg",
                                    "Bh",
                                    "Hs",
                                    "Mt",
                                    "Ds",
                                    "Rg",
                                    "Cn",
                                    "Nh",
                                    "Fl",
                                    "Mc",
                                    "Lv",
                                    "Ts",
                                    "Og"};
                                   /* "Ung", Outdated element signs == DEPRECATED
                                    "Unp",
                                    "Unh",
                                    "Uns",
                                    "Uno",
                                    "Une",
                                    "Uun",
                                    "Uuu",
                                    "Uub"};
                                   */

std::string element::info::states[] = {"Solid", "Gas", "Liquid", "Unknown"};

int element::info::n_of_elements = sizeof(element::info::list)/sizeof(element::info::list[0]);

bool flags::COLOR = true;
bool flags::NAME_ONLY = false;
bool flags::NAME = true;
bool flags::SIGN = true;
bool flags::MASS = false;
bool flags::ATOMIC = true;
bool flags::POS = false;
bool flags::STP_STATE = false;
bool flags::RADS = false;


struct option element::info::long_opts[] = {
    {"all",            no_argument,   0, 'A' },
    {"rad",            no_argument,   0, 'r' },
    {"mass",           no_argument,   0, 'm' },
    {"name-only",      no_argument,   0, 'n' },
    {"stp-state",      no_argument,   0, 's' },
    {"position",       no_argument,   0, 'p' },
    {"help",           no_argument,   0, 'h' },
    {"dump-elements",  no_argument,   0, 'd' },
    {"no-color",       no_argument,   0, 'c' },
};
