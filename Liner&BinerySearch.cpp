
void display()
{
    cout << "==============================\n";
    cout << "Elemen Array Setelah Diurutkan (Asc)\n";
    cout << "==============================\n";
    for (int i = 0; i < nPanjang; i++)
    {
        cout << elemen[i];
        if (i < nPanjang - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
}