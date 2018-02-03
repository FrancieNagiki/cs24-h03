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
        void insertPoint(const point &p); //inserts a new point to cloud
        void printPoints();
    private:
        point* cloud;
        int capacity; //capacity of the arrays of points
        int numPoints; // number of points stored so far
};

#endif
