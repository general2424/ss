#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
char op[2], arg1[5], arg2[5], position[5];
void main() {
FILE * fp1, * fp2;
fp1 = fopen("input.txt", "r");
fp2 = fopen("output.txt", "w");
while (!feof(fp1)) {
fscanf(fp1, "%s %s %s %s", position, op, arg1, arg2);
if (strcmp(op, "+") == 0) {
fprintf(fp2, "\nMOV R0,%s", arg1);
fprintf(fp2, "\nADD R0,%s", arg2);
fprintf(fp2, "\nMOV %s,R0", position);
}
if (strcmp(op, "*") == 0) {
fprintf(fp2, "\nMOV R0,%s", arg1);
fprintf(fp2, "\nMUL R0,%s", arg2);
fprintf(fp2, "\nMOV %s,R0", position);
}
if (strcmp(op, "-") == 0) {
fprintf(fp2, "\nMOV R0,%s", arg1);
fprintf(fp2, "\nSUB R0,%s", arg2);
fprintf(fp2, "\nMOV %s,R0", position);
}
if (strcmp(op, "/") == 0) {
fprintf(fp2, "\nMOV R0,%s", arg1);
fprintf(fp2, "\nDIV R0,%s", arg2);
fprintf(fp2, "\nMOV %s,R0", position);
}
if (strcmp(op, "=") == 0) {
fprintf(fp2, "\nMOV R0,%s", arg2);
fprintf(fp2, "\nMOV %s,R0", arg1);
}
fprintf(fp2, "\n");
}
fclose(fp1);
fclose(fp2);
//getch();
}
