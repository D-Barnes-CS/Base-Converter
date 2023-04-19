
#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::vector;

int main()
{
    int num, base, rem, count;
    count = 0;
    
    vector<int> arr;
    while (count < 5) {
        cin >> num >> base;
        if (num % base != 0) {
            while ((num % base) != 0) {
                rem = num % base;
                arr.push_back(rem);
                num = num / base;
            }
        }
        else {
            while (rem > 0) {
                rem = num / base;
                arr.push_back(rem);
                num = num / base;
            }
        }
        cout << "final" << endl;
        for (int i : arr) {
            cout << arr.back();
            arr.pop_back();
        }
        cout << endl;
        count++;
    }
}
