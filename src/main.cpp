#include <iostream>
#include <string>
#include <cstdio>
int main() { std::string pesel; std::cout << "Podaj pesel:"; std::cin >> pesel; if(pesel.length() != 11) { return -1; } if(pesel.c_str()[9] == '0' || pesel.c_str()[9] == '2' || pesel.c_str()[9] == '4' || pesel.c_str()[9] == '6' || pesel.c_str()[9] == '8') { printf("Kobieta: "); } else { printf("Mezczyzna: "); } printf("Data %s%c%c : %c%c : %c%c", pesel.c_str()[2] == '2' || pesel.c_str()[2] == '3' ? "20" : "19", pesel.c_str()[0], pesel.c_str()[1], pesel.c_str()[2] == '3' ? '1' : '0', pesel.c_str()[3], pesel.c_str()[4], pesel.c_str()[5]); }