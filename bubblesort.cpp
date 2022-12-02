void Bubble_sort(int *arr,int n)
{
    int flag;
    for(int i = 0;i < n - 1; i++)
    {
        flag = 0;
        for(int j = 0;j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j + 1],arr[j]);
                flag = 1;
            }
            
        }
        if(flag == 0)
        {
            break;
        }
    }
}
