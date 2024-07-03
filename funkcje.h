#pragma once
#include <iostream>
using namespace std;

struct Struktura {
	float rozmiar = 0;
	char* tab = nullptr;
};

Struktura alokacja(float rozmiar);
void dealokacja(Struktura& wsk);
void zapisDoPliku(Struktura& wsk);
Struktura odczytZPliku(Struktura& wsk);

