#pragma once
#include <iostream>
#include <fstream>
#include <vector>

#include "vec3D.hpp"

#define scr st::vector<st::vector<int>> 
#define scrRGB st::vector<st::vector<Vec3D>>


namespace st = std;


class IO{
    protected:
        st::string chars = " .:-=+*#%@";

    public:
        IO();

        void print(scr const &screen, num const aspect, bool const numbers, bool const cross); //add row and col numbers and/or cross in the middle
        void print(st::string const fileName, scr const &screen, num const aspect, bool const numbers, bool const cross);
};