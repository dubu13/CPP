#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        // std::cout << "tmp: " << tmp[0] << std::endl;
        // std::cout << "test: " << test[0] << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

// class Test{
//     public:
//         Test(): _n(0){}
//         ~Test() = default;
//         int getN() const { return _n; }
//         void setN(int n) { _n = n; }
//     private:
//         int _n;
// };

// int main(){

//     std::cout << "---empty array---" << std::endl;
//     try{
//         Array<int> empty;
//         std::cout << "size: " << empty.size() << ", member: " << empty[0] << std::endl;
//     }
//     catch(const std::exception& e){
//         std::cerr << e.what() << '\n';
//     };
//     std::cout << "---array---" << std::endl;
//     try{
//         Array<int> arr(3);
//         std::cout << "size: " << arr.size() << std::endl;
//         for (unsigned int i = 0; i < arr.size(); i++){
//             arr[i] = i;
//             std::cout << "arr[" << i << "]: " << arr[i] << std::endl;
//         }
//     }
//     catch(const std::exception& e){
//         std::cerr << e.what() << '\n';
//     }
//     std::cout << "---const array---" << std::endl;
//     try{
//         const Array<double> arr(3);
//         std::cout << "size: " << arr.size() << std::endl;
//         for (unsigned int i = 0; i < arr.size(); i++)
//             std::cout << "arr[" << i << "]: " << arr[i] << std::endl;
//     }
//     catch(const std::exception& e){
//         std::cerr << e.what() << '\n';
//     }
//     std::cout << "---copy array---" << std::endl;
//     try{
//         Array<char> arr(3);
//         for(unsigned int i = 0; i < arr.size(); i++){
//             arr[i] = 'a' + i;
//             std::cout << "arr[" << i << "]: " << arr[i] << std::endl;
//         }
//         Array<char> arr2(arr);
//         for(unsigned int i = 0; i < arr2.size(); i++)
//             std::cout << "arr2[" << i << "]: " << arr2[i] << std::endl;
//     }
//     catch(const std::exception& e){
//         std::cerr << e.what() << '\n';
//     }
//     std::cout << "---class array---" << std::endl;
//     try{
//         Array<Test> arr(3);
//         for(unsigned int i = 0; i < arr.size(); i++){
//             arr[i].setN(i);
//             std::cout << "arr[" <<  i << "]: " << arr[i].getN() << std::endl;
//         }
//     }
//     catch(const std::exception& e){
//         std::cerr << e.what() << '\n';
//     }
// }