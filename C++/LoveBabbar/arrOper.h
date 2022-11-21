void printArr(int *arr, int N){
    for(int i = 0; i<N; i++){
        std::cout << arr[i] << " ";
    }
}

void inputArr(int *arr, int N){
    for(int i = 0; i<N; i++){
        std::cin >> arr[i];
    }
}