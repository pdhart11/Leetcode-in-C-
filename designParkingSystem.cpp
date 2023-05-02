class ParkingSystem {
public:
    vector <int> arr = {0,0,0};
    ParkingSystem(int big, int medium, int small) 
    {
        arr[0] = big;
        arr[1] = medium;
        arr[2] = small;        
    }
    
    bool addCar(int carType) 
    {
        carType = carType -1;
        if (arr[carType] > 0)
        {
            arr[carType]--;
            return true;
        }
        else
        {
            return false;
        }       
    }
};
