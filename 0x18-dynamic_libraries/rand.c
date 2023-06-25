int rand()
{       
        static int n = 0;
        int numbers[] = {9, 8, 10, 24, 75, 9};

        n = (n + 1) % 6;
        return numbers[n];
}
