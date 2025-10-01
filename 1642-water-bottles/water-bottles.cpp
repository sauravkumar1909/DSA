class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int max=numBottles;

        while(numBottles >= numExchange){
        int drinkBottles= numBottles / numExchange;
        max += drinkBottles;
        numBottles = (numBottles % numExchange) + drinkBottles;
        }
        return max;
    }
};