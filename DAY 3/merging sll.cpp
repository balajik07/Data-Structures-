#include <stdio.h>

void mergeLists(int list1[], int size1, int list2[], int size2, int mergedList[])
 {
    int i, j, k;
    i = j = k = 0;
    while (i < size1 && j < size2) 
	{
        if (list1[i] < list2[j]) 
		{
            mergedList[k] = list1[i];
            i++;
        } 
		else
		 {
            mergedList[k] = list2[j];
            j++;
        }
        k++;
    }

    
    while (i < size1)
	 {
        mergedList[k] = list1[i];
        i++;
        k++;
    }

   
    while (j < size2)
	 {
        mergedList[k] = list2[j];
        j++;
        k++;
    }
}

int main()
 {
    int list1[] = {1, 3, 5, 7};
    int size1 = sizeof(list1) / sizeof(list1[0]);

    int list2[] = {2, 4, 6, 8};
    int size2 = sizeof(list2) / sizeof(list2[0]);

    int mergedList[size1 + size2];

    mergeLists(list1, size1, list2, size2, mergedList);

    printf("Merged List: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", mergedList[i]);
    }
    printf("\n");

    return 0;
}

