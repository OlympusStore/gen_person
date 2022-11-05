#pragma once
#include <time.h>
typedef struct {
    unsigned long long int rg;
    const char* cpf;
    const char* name;
}person_t;

person_t gen_person();

const char* randomcpf();

unsigned long long int randomrg();

const char* randomname();

unsigned int randomEx(int min, int max);

void printPerson(person_t p);

const char* name[6][2] = {
    {"Roberto", "Alves"},
    {"Rodrigo", "Oliveira"},
    {"Paulo", "Souza"},
    {"Marcia", "Ferreira"},
    {"Joana", "zna"},
    {"Suzi", "zasdasd"}
};

