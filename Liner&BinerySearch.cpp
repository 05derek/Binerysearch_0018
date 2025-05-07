
            if (elemen[mid] == item)
            {
                cout << "\nElemen " << item << " ditemukan pada indeks ke-" << mid << ".\n";
                return;
            }
            else if (item < elemen[mid])
            {
                high = mid - 1;
            }