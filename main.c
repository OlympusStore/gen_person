#include <stdio.h>
#include <stdlib.h>
#include "main.h"

unsigned int randomEx(int min, int max) {
    srand(time(0));
    int res = min + (rand() % max);
    return res;
}

char* randomcpf() {
    unsigned int cpf[4];
    cpf[0] = randomEx(100, 400);
    cpf[1] = randomEx(100, 600);
    cpf[2] = randomEx(100, 500);
    cpf[3] = randomEx(10, 100);
    char* str = malloc(255);
    sprintf(str, "%d.%d.%d-%d", cpf[0], cpf[1], cpf[2], cpf[3]);
    return str;
}

char* randomname() {
    char* str = malloc(255);
    unsigned int fn;
    unsigned int sn;
    fn = randomEx(0, 6);
    sn = randomEx(0, 6);
    sprintf(str, "%s %s", name[fn][0], name[sn][1]);
    return str;
}

unsigned long long int randomrg(void) {
    char str[255];
    sprintf(str, "%d%d%d%d", randomEx(100, 500), randomEx(100, 500), randomEx(100, 500), randomEx(100, 500));
    return atoi(str);
}

person_t gen_person(void) {
    person_t newp;
    newp.name = randomname();
    newp.cpf = randomcpf();
    newp.rg = randomrg();
    return (person_t)newp;
}

void printPerson(person_t p) {
    printf("Nome: %s\nCPF: %s\nRG: %d\n\n", p.name, p.cpf, p.rg);
}

int main(void) {
    person_t person = gen_person();
    printPerson(person);
    getchar();
    return 0;
}
