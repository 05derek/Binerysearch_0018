
void binarySearch()
{
    char ulang;
    do
    {
        cout << "\n==============================\n";
        cout << "Pencarian Binary Search\n";
        cout << "==============================\n";

        int item;
        cout << "Masukkan elemen yang ingin dicari: ";
        cin >> item;

        int low = 0;
        int high = nPanjang - 1;