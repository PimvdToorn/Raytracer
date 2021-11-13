#pragma once
#include <iterator>

#include "vec3D.hpp"
#include "ray.hpp"

#define scr st::vector<st::vector<int>> 

namespace rayTracer{

class RayScanner{
    protected:
        st::string chars = " .:-=+*#%@";

        num screenDistance;
        num screenWidth;
        num screenHeight;

        int pixelWidth;
        int pixelHeight;

        VPO objects;

    public:

        RayScanner(num screenDistance, num screenWidth, num screenHeight, int pixelWidth, int pixelHeight);

        scr scan(); //renders the screen
        void print(scr screen, bool numbers, bool cross); //add row and col numbers and/or cross in the middle

        void addObject(Object* object);

        //template to add a list of objects
        template <typename T> void addObjectList(st::list<T> &objectList){
            typename st::list<T> :: iterator i;
            for(i = objectList.begin(); i != objectList.end(); ++i){
                objects.push_back(&*i);
            }
        }
};
}