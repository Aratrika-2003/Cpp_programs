int getInsertPosition(vector<int> &arr, int key) 
{
    // add your logic here
	for(int i = 0; i < arr.size(); i++)
	{
		if(arr[i] == key)
			return i;
		else if(arr[i] > key)
			return i;
	}
	return arr.size();
}
