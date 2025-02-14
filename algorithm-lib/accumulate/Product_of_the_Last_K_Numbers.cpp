#include<iostream>
#include<vector>
#include<algorithm>
#include <numeric>
#include <functional>
using namespace std;
class ProductOfNumbers {
    private:
       
        vector<int>number;
    public:
        ProductOfNumbers() {
            number.resize(0);
        }
       
        void add(int num) {
            number.push_back(num);
            
        }
    
        int getProduct(int k) {
            int n=number.size()-1;
            int pro = accumulate(number.rbegin(), number.rbegin() + k,
                           1, multiplies<int>());;
           
            return pro;
        }
    };
    
    /**
     * Your ProductOfNumbers object will be instantiated and called as such:
     * ProductOfNumbers* obj = new ProductOfNumbers();
     * obj->add(num);
     * int param_2 = obj->getProduct(k);
     */