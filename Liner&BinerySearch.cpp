
void bubbleSortArray()
{
    int pass = 1;
    do
    {
        for (int i = 0; i <= nPanjang - pass - 1; i++)
        {
            if (elemen[i] > elemen[i + 1])
            {
                int temp = elemen[i];
                elemen[i] = elemen[i + 1];
                elemen[i + 1] = temp;
            }
        }
        pass++;
    } while (pass < nPanjang);
}