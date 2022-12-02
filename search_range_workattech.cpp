vector<int> searchRange(vector<int> &arr, int key) 
{
    // add your logic here
  vector<int> search;
	int start = -1,end = -1;

	for(int i = 0; i < arr.size(); i++)
	{
		if(arr[i] == key && start == -1)
			start = i;
		if(arr[i] == key)
			end = i;
	}
	search = {start,end};
	return search;
}
