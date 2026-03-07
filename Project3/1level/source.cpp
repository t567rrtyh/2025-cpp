#include <iostream>
#include <cstdio>

using namespace std;

class ArrayList {
private:
    double* data;
    int size;
    int capacity;
    void resize(int newCapacity) {
        double* newData = new double[newCapacity];
        for (int i = 0; i < size; i++) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        capacity = newCapacity;
    }

public:
    ArrayList() {
        size = 0;
        capacity = 4;
        data = new double[capacity];
    }
    ~ArrayList() {
        delete[] data;
    }
    void add(double value) {
        if (size == capacity) {
            resize(capacity * 2);
        }
        data[size] = value;
        size++;
    }
    double get(int index) {
        if (index < 0 || index >= size) {
            printf("Ошибка\n");
            return 0.0;
        }
        return data[index];
    }
    void set(int index, double value) {
        if (index < 0 || index >= size) {
            printf("Ошибка\n");
            return;
        }
        data[index] = value;
    }
    void remove(int index) {
        if (index < 0 || index >= size) {
            printf("Ошибка\n");
            return;
        }
        for (int i = index; i < size - 1; i++) {
            data[i] = data[i + 1];
        }
        size--;
    }
    int getSize() {
        return size;
    }
    void print() {
        cout << "[" << size << "/" << capacity << "] [";
        for (int i = 0; i < size; i++) {
            cout << data[i];
            if (i < size - 1) cout << " ";
        }
        cout << "]" << endl;
    }
};

int main() {
    ArrayList list;
    list.add(0.5);
    list.add(1.5);
    list.add(2.5);
    list.print();
    cout << list.get(1) << endl;
    list.set(0, 9.99);
    list.print();
    list.remove(1);
    list.print();
    cout << list.getSize() << endl;

    return 0;
}
