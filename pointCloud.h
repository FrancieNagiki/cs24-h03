class pointCloud {
    public:
        // PARAMETERIZED CONSTRUCTOR
        pointCloud(int size=10){cloud = new point[numpoints];}
        // COPY CONSTRUCTOR
        pointCloud(const pointCloud& other);
        // ASSIGNMENT OPERATOR
        void operator=(const point& other);
        //DESTRUCTOR
        ~pointCloud();
        // MODIFICATION MEMBER FUNCTIONS
        void insertPoint(const point &p);
        void printPoints();
    private:
        point *cloud;
        int size;
};
