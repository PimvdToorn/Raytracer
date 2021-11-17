#pragma once
#include <iterator>
#include <list>

#include "main.hpp"

namespace rt = rayTracer;
#define scr st::vector<st::vector<int>> 
#define scrRGB st::vector<st::vector<rt::Vec3D>>


namespace rayTracer{

class RayScanner{
    protected:
        VPO objects;

    public:

        RayScanner();

        //rendering
        scr scanGrey(num screenDistance, num screenWidth, num screenHeight, int pixelWidth, int pixelHeight);
        scrRGB scanRGB(num screenDistance, num screenWidth, num screenHeight, int pixelWidth, int pixelHeight);
        
        

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