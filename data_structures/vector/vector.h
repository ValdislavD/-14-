#ifndef UNTITLED14_VECTOR_H
#define UNTITLED14_VECTOR_H

#endif //UNTITLED14_VECTOR_H

typedef struct vector {
    int *data; // указатель на элементы вектора
    size_t size; // размер вектора
    size_t capacity; // вместимость вектора
} vector;

vector createVector(size_t n);