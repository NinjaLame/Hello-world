int main(){
  int *P;
    int Num = 10;
    printf("Num has value = %d\n", Num);
    P = &Num;
    *P = 20;
    printf("Num has value = %d\n", Num);
  
}
