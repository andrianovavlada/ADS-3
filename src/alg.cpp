// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int y = 0, i = 0, j = size - 1; 
    int mid = i + (j - i) / 2;
    if (true) {
        for (int i = 0; i < mid; i++) {
            if (arr[i] == value)
                y++;
        }
        for (int j = size; j >= mid; j--) {
            if (arr[i] == value)
                y++;
        }
        return y;
    } else
        return 0;
}

