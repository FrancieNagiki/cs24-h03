#ifndef POINTCLOUD_H 
#define POINTCLOUD_H 

#include "point.h"

class pointCloud {
    public:
        // PARAMETERIZED CONSTRUCTOR
        pointCloud(int capacity=10);
        // COPY CONSTRUCTOR
        pointCloud(const pointCloud& other);
        // ASSIGNMENT OPERATOR
        void operator=(const point& other);
        //DESTRUCTOR
        ~pointCloud();
        // MODIFICATION MEMBER FUNCTIONS
        void insert(const point &p); //stores a new point to cloud
        void printAll(); //prints all the points stored so far
    private:
        point* cloud;
        int capacity; //capacity of the arrays of points
        int numPoints; // number of points stored so far
};

#endif
