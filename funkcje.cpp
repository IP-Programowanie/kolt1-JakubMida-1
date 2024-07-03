#include "funkcje.h"


Struktura alokacja(float rozmiar) {
	Struktura wsk;
	wsk.rozmiar = rozmiar;
	wsk.tab = new char [rozmiar + 1] {0};
	wsk.tab[0] = (rozmiar);
	return wsk;

}

void dealokacja(Struktura& wsk) {
	delete[](wsk.tab - 1);
	wsk.tab = nullptr;
}

void zapisDoPliku(Struktura& wsk) {
	FILE* plik;
	plik = fopen("plik.txt", "w");
	for (int i = 0; i < wsk.rozmiar+1; i++) {
		fprintf(plik, "%d", wsk.tab[i]);
	}

	fclose(plik);
	plik = nullptr;
}


Struktura odczytZPliku(Struktura& wsk) {
	FILE* plik = fopen("plik.txt", "r");
	float rozmiar = wsk.tab[0];
	Struktura odczytana = alokacja(rozmiar);
	odczytana.rozmiar = wsk.tab[0];
	odczytana.tab = new char[rozmiar] {};
	for (int i = 0; i < odczytana.rozmiar; i++) {
		fscanf(plik, "%hhd", (odczytana.tab+i));
	}

	fclose(plik);
	plik = nullptr;
	return odczytana;

}
