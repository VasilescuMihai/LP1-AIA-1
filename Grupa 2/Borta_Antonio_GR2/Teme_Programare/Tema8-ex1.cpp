// Sa se explice succint scopul programului si sa se corecteze programul (hint: liniile :8 20 36 46 contin erori de sintaxa/logica)

#include <iostream>
#include <cstdlib>

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int *arrMalloc = static_cast<int *>(malloc(size * sizeof(int)));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;


    int *arrCalloc = static_cast<int *>(calloc(size, sizeof(int)));
    if (arrCalloc == nullptr) {
        std::cout << "Memory allocation failed using calloc!" << std::endl;
        free(arrMalloc);
        return 1;
    }

    std::cout << "Memory allocated using calloc." << std::endl;


    int newSize;
    std::cout << "Enter the new size for reallocation: ";
    std::cin >> newSize;


    int *arrRealloc = static_cast<int *>(realloc(arrMalloc, newSize * sizeof(int)));
    if (arrRealloc == nullptr) {
        std::cout << "Memory reallocation failed using realloc!" << std::endl;
        free(arrMalloc);
        free(arrCalloc);
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;

    free(arrRealloc);
    free(arrCalloc);

    return 0;
}

/* Introducem dimensiunea unui array (un numar de tip int).
   Functiile "malloc" si "calloc" vor aloca memoria pentru "arrMalloc" si "arrCalloc."
   Introducem o alta dimensiune pentru realocare, realocand memoria pentru "arrMalloc" cu ajutorul functiei "realloc". */
