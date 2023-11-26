// Sa se explice succint scopul programului de mai jos si sa se corecteze programul (hint: liniile 4 9 21 26 30 47 contin erori de sintaxa/logica)

#include <iostream>
#include <cstdlib>

int main() {
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size;


    float *arrMalloc = (float *)malloc(size * sizeof(float));
    if (arrMalloc == nullptr) {
        std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;

    std::cout << "Enter " << size << " float numbers:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arrMalloc[i];
    }

    int newSize;
    std::cout << "Enter the new size for reallocation: ";
    std::cin >> newSize;


    float *arrRealloc = (float *)realloc(arrMalloc, newSize * sizeof(float));
    if (arrRealloc == nullptr) {
        std::cout << "Memory reallocation failed using realloc!" << std::endl;
        free(arrMalloc);
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;


    std::cout << "Enter " << newSize - size << " more float numbers:" << std::endl;
    for (int i = size; i < newSize; ++i) {
        std::cin >> arrRealloc[i];
    }


    std::cout << "Updated array:" << std::endl;
    for (int i = 0; i < newSize; i++) {
        std::cout << arrRealloc[i] << " ";
    }
    std::cout << std::endl;


    free(arrRealloc);

    return 0;
}
/* In acest program se aloca o marime unui array folosind functia malloc iar dupa
array-ul este umplut cu "size" numere de tip float. Dupa marimea array-ului este modificata, iar
in functie de noua marime noi vom introduce caracterele lipsa sau nu.*/
