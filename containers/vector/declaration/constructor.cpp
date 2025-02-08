#include<iostream>
#include<vector>
int main(){
    std::vector<int>v;//using defualt constructor i.e an empty vector
    std::vector<int>b(4);/*using paramterised constructor*/
    std::vector<int>c(5,3);/* */
    std::vector<int>d(c.begin()+1,c.end());/* */
    std::vector<int>e;/* */
    e=b;
    std::vector<int>ex;
    ex.assign(c.begin()+1,c.end()-1);

    return 0;
}