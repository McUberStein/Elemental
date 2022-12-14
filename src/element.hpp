#ifndef ELEMENT_HPP_INCLUDED
#define ELEMENT_HPP_INCLUDED

#include <iostream>
#include <getopt.h>
#include <cstring>


#define PROGVER 0.2

#define RED "\x1B[0;31m"
#define DARKRED "\x1B[1;31m"
#define BLUE "\x1B[0;34m"
#define DARKBLUE "\x1B[1;34m"
#define WHITE "\x1B[0;37m"
#define BOLDWHITE "\x1B[1;37m"
#define GREEN "\x1B[0;32m"
#define DARKGREEN "\x1B[1;32m"
#define CYAN "\x1B[0;36m"
#define DARKCYAN "\x1B[1;36m"
#define YELLOW "\x1B[0;33m"
#define DARKYELLOW "\x1B[1;33m"
#define NOCOLOR "\x1B[0m"
#define RESCOLOR std::cout << NOCOLOR

namespace element{

    class types{
    private:
        typedef unsigned short int elenum_t;
    public:
        typedef enum {solid = 1, gas, liquid, unknown} elestate_t;
        typedef enum{H = 1, He, Li, Be, B, C, N, O, F, Ne, Na, Mg, Al, Si, P, S, Cl, Ar, K, Ca, Sc, Ti, V, Cr, Mn, Fe, Co, Ni, Cu, Zn, Ga, Ge, As, Se, Br, Kr, Rb, Sr, Y, Zr, Nb, Mo, Tc, Ru, Rh, Pd, Ag, Cd, In, Sn, Sb, Te, I, Xe, Cs, Ba, La, Ce, Pr, Nd, Pm, Sm, Eu, Gd, Tb, Dy, Ho, Er, Tm, Yb, Lu, Hf, Ta, W, Re, Os, Ir, Pt, Au, Hg, Tl, Pb, Bi, Po, At, Rn, Fr, Ra, Ac, Th, Pa, U, Np, Pu, Am, Cm, Bk, Cf, Es, Fm, Md, No, Lr, Rf, Db, Sg, Bh, Hs, Mt, Ds, Rg, Cn, Nh, Fl, Mc, Lv, Ts, Og, ERR = 4000} elenium_t;
        typedef struct{
            std::string name;
            std::string sign;
            float mass;
            elenum_t atomic; // proton, neutron;
            elenum_t group, period;
            elestate_t stp_state;
            bool radioactive;
        } element_t;
    };

    class flags{
    public:
        static bool FULLNAME_M;
        static bool BYNUM_M;
        static bool CASE;
        static bool COLOR;
        static bool NAME_ONLY;
        static bool NAME;
        static bool SIGN;
        static bool MASS;
        static bool ATOMIC;
        static bool POS;
        static bool STP_STATE;
        static bool RADS;
    };

    class info{
    public:
        static std::string list[];
        static std::string list_long[];
        static std::string states[];
        static int n_of_elements;
        static struct option long_opts[];
    };

    class utils{
    public:
        static types::elenium_t stoen(std::string exp, std::string strarr[]);
        static std::string entos(int num, std::string strarr[]);
        static void handle_args(int argc, char *argv[]);
        static types::element_t *get_element(int num);
        static bool isnum(std::string str);
        class arrempty{
        public:
            arrempty(std::string str, bool *out){
                int n = str.length();
                int c = 0;
                char arr[n+1];
                strcpy(arr, str.c_str());
                for(int i = 0; i < n+1; i++){
                    if(arr[i] == ' ')
                        c++;
                }
                if(c == n)
                    *out = true;
                else
                    *out = false;
            }
            arrempty(char *arr, bool *out){
                int n = sizeof(arr);
                int c = 0;
                for(int i = 0; i < n; i++){
                    if(arr[i] == ' ')
                        c++;
                }
                if(c == n)
                    *out = true;
                else
                    *out = false;
            }
        };
    };
}


#endif
