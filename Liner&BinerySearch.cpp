
            else
            {
                low = mid + 1;
            }
        } while (low <= high);

        cout << "\nMaaf! Elemen " << item << " tidak ditemukan dalam array.\n";

        cout << "\nIngin mencari lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');
}