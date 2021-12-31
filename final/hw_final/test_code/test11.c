void printNum(int args, ...)
{
    printf("%d ", args);
}

int main()
{
    printNum(1, 10);
    printNum(2, 11, 20);
    printNum(3, 12, 21, 30);
    printNum(4, 13, 22, 31, 40);

    return 0;
}
