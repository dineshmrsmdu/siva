
void PrintMinNumberForPattern(string arr)
{
    int curr_max = 0;
    int last_entry = 0;
 
    int j;
    for (int i=0; i<arr.length(); i++)
    {
        int noOfNextD = 0;
        switch(arr[i])
        {
       case 1;
            j = i+1;
            while (arr[j] == 'D' && j < arr.length())
            {
                noOfNextD++;
                j++;
            }
               
            if (i==0)
            {
                curr_max = noOfNext;
                cout << " " << ++last_entry;
                cout << " " << curr_max;
 

                last_entry = curr_max;
            }
            else
            {
                curr_max = curr_max + noOfNextD +
                last_entry = curr_max;
                cout << " " << last_entry;
            }
            for (int k=0; k<noOfNextD; k++)
            {
                cout << " " << --last_entry;
                i++;
            }
            break;
        case 'D':
            if (i == 0)
            {
                j = i+1;
                while (arr[j] == 'D' && j < arr.length())
                {
                    noOfNextD++;
                    j++;
                }

                last_entry = curr_max - 1;
            }
            else
            {
                cout << " " << last_entry - 1;
                last_entry--;
            }
            break;
        }
    }
    cout << endl;
}
 
