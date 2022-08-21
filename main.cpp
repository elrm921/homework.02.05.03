#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class funct {
    vector<int> m_vector;
public:
    funct(vector<int> v) : m_vector(v) {}
    int get_sum() {
        int sum = 0;
        for_each(m_vector.begin(), m_vector.end(), [this, &sum](int &n){ if (n % 3 == 0) sum += n; });
        return sum;
    }
    int get_count() {
        int count = 0;
        for_each(m_vector.begin(), m_vector.end(), [this, &count](int &n){ if (n % 3 == 0) count++; });
        return count;
    }
};

int main() {
    vector<int> in = {4,1,3,6,25,54};
    funct foo(in);
    cout << "get_sum() = " << foo.get_sum() << endl;
    cout << "get_count() = " << foo.get_count() << endl;
    return 0;
}