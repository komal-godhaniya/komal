int size_arr1, size_arr2, arr_1[size_arr1], arr_2[size_arr2];
    printf("Enter First Array Size : ");
    scanf("%d",&size_arr1);
    for(i=0; i<size_arr1; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&arr_1[i]);
    }
    
    printf("Enter Second Array Size : ");
    scanf("%d",&size_arr2);
    for(i=0; i<size_arr2; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&arr_2[i]);
    }
    
    int resize;
    int merge_arr[resize];
    for(i=0; i<size_arr1; i++)
    {
        merge_arr[i] = arr_1[i];
    }
    for(i=0; i<size_arr2; i++)
    {
        merge_arr[i + size_arr1] = arr_2[i];
        resize++;
    }
    printf("---After Merge Array---");
    for(i=0; i<size_arr1+size_arr2; i++)
    {
        printf("\na[%d] = %d",i,merge_arr[i]);
    }