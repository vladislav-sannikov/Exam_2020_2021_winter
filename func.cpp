#include <iostream> // cout cin
#include <vector> // ��� ������ � ���������
#include <math.h> // ��� �������������� ��������

using namespace std;

vector<bool> f = {0, 0, 0, 1, 1, 0, 1, 1};

int num_of_args(vector<bool> f) {
    int n = log2(f.size()); //������ = 2^n -> n = log2(������ �������)
    return n;
}

int main() {
    int n = num_of_args(f);
    cout << n;
}