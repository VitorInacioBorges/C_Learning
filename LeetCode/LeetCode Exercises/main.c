int main()
{
    // Number Of Good Pairs (10 min)

    int array[4] = {1, 1, 1, 1}; // 10
    int cont = 0;
    int i, j;
    for(i = 0; i < 3; i++){ // array.length - 1
        for(j = i + 1; j < 4; j++){ // array.length
            if(array[i] == array[j] && i < j) cont++;
            printf("i: %d, j: %d\n", i, j);
            printf("cont: %d\n\n", cont);
        }
    }
}
