#ifndef POINTCLOUD_H 
#define POINTCLOUD_H 

#include "point.h"
// class pointCloud stores an arbitrary number of points in 2D, where a point is defined in point.h
// The class pointCloud uses a dynamic array with an initial capacity that is adjustable.
//The insert() method stores a new point in the array. If the array is full, its capacity is increased
//at run time similar to the bag class provided in Chapter 4.

class pointCloud {
    public:
        // PARAMETERIZED CONSTRUCTOR
        pointCloud(int capacity=10);
        // COPY CONSTRUCTOR
        pointCloud(const pointCloud& other);
        // ASSIGNMENT OPERATOR
        void operator=(const pointCloud& other);
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
