int Partition(vector<int>&arr, int begin, int end)
{
    int pivot = arr[begin];
    // Last position where puts the no_larger element.
    int pos = begin;
    for(int i=begin+1; i!=end; i++)
    {
        if(arr[i] <= pivot)
        {
            pos++;
            if(i!=pos)
            {
                swap(arr[pos], arr[i]);
            }
        }
    }
    swap(arr[begin], arr[pos]);
    return pos;
}

int find_kth_number(vector<int> &arr, int k){
    int begin = 0, end = arr.size();
    assert(k>0 && k<=end);
    int target_num = 0;
    while (begin < end){
        int pos = partition(arr, begin, end);
        if(pos == k-1){
            target_num = arr[pos];
            break;
        }
        else if(pos > k-1){
            end = pos;
        }
        else{
            begin = pos + 1;
        }
    }
    return target_num;
}