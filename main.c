#include <stdio.h>
#include <stdlib.h>
#include "main.h"

unsigned int randomEx(int min, int max) {
    srand((unsigned) time (NULL));
    return min + (rand() % max);
}

const char* randomcpf() {
    unsigned int cpf[4];
    cpf[0] = randomEx(100, 400);
    cpf[1] = randomEx(100, 600);
    cpf[2] = randomEx(100, 500);
    cpf[3] = randomEx(10, 100);
    char* str;
    sprintf(str, "%d.%d.%d-%d", cpf[0], cpf[1], cpf[2], cpf[3]);
    return str;
}

const char* randomname() {
    char* str;
    unsigned int fn;
    unsigned int sn;
    fn = randomEx(0, 6);
    sn = randomEx(0, 6);
    sprintf(str, "%s %s", name[fn][0], name[sn][1]);
    return str;
}

unsigned long long int randomrg() {
    char* str;
    sprintf(str, "%d%d%d%d", randomEx(2, 20), randomEx(2, 20), randomEx(2, 20), randomEx(2, 20));
    return atoi(str);
}

person_t gen_person() {
    person_t person;
    const char* newcpf;
    newcpf = randomcpf();
    const char* newname = randomname();
    unsigned long long int newrg = randomrg();
    person.cpf = newcpf;
    person.name = newname;
    person.rg = newrg;
    return (person_t)person;
}

void printPerson(person_t p) {
    printf("Nome: %s\nCPF: %s\nRG: %d\n\n", p.name, p.cpf, p.rg);
}

int main(void) {
    person_t newp = (person_t)gen_person();
    printPerson(newp);
    getchar();
    return 0;
}
