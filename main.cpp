#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
int num, result;
int i;

int main() {
    cout << "num : ";
    cin >> num;
    result = num;

    for (i = 2; i <= num; i++) {
        while (num % i == 0) {
            v.push_back(i);
            num = num / i;
        }
    }
    v.erase(unique(v.begin(), v.end()), v.end());

    for (i = 0; i < v.size(); i++)
        result = result * (v.at(i) - 1) / v.at(i);

    cout << result;

    return 0;
}
