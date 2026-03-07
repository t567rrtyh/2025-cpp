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
            printf("Ошибка: индекс вне диапазона\n");
            return 0.0;
        }
        return data[index];
    }
    void set(int index, double value) {
        if (index < 0 || index >= size) {
            printf("Ошибка: индекс вне диапазона\n");
            return;
        }
        data[index] = value;
    }
    void remove(int index) {
        if (index < 0 || index >= size) {
            printf("Ошибка: индекс вне диапазона\n");
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
        cout << "[" << size << "/" << capacity << "]  ";
        for (int i = 0; i < size; i++) {
            cout << data[i];
            if (i < size - 1) cout << "  ";
        }
        cout << endl;
    }
    void insert(int index, double value) {
        if (index < 0 || index > size) {
            printf("Ошибка: нельзя вставить по такому индексу\n");
            return;
        }
        if (size == capacity) {
            resize(capacity * 2);
        }
        for (int i = size; i > index; i--) {
            data[i] = data[i - 1];
        }
        data[index] = value;
        size++;
    }
    void clear() {
        size = 0;
    }
    bool contains(double value) {
        for (int i = 0; i < size; i++) {
            if (data[i] == value) return true;
        }
        return false;
    }
};

int main() {
    ArrayList a;
    a.add(1.5);
    a.add(3.14);
    a.add(2.718);
    a.print();
    a.insert(1, 42);
    a.print();
    cout << a.contains(3.14) << " " << a.contains(999) << endl;
    a.clear();
    a.print();
    a.add(7);
    a.add(0.25);
    a.print();

    return 0;
}